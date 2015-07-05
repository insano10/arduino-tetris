/*
 * GridMaster.cpp
 *
 *  Created on: 3 Mar 2012
 *      Author: insano10
 */

#include "GridMaster.h"

#include "../lib/SubPGraphics.h"

GridMaster::GridMaster(Coordinate& grid_origin, Coordinate next_tetromino_origin, uint8_t grid_spacing, uint8_t grid_block_size,
					   uint8_t num_grid_rows, uint8_t num_grid_cols)
	: NUM_ROWS(num_grid_rows),
	  NUM_COLS(num_grid_cols),
	  GRID_SPACING(grid_spacing),
	  grid_(grid_origin,GRID_SPACING, num_grid_rows, num_grid_cols),
	  active_tetromino_(NULL),
	  grid_origin_(grid_origin),
	  next_tetromino_origin_(next_tetromino_origin) {

	insertion_point_.x = 4;
	insertion_point_.y = 0;

	generator_ = new TetrominoGenerator(grid_block_size, insertion_point_);

	Coordinate grid_max;
	grid_max.x = grid_origin_.x + (NUM_COLS * GRID_SPACING);
	grid_max.y = grid_origin_.y + (NUM_ROWS * GRID_SPACING);
	grid_max_ = grid_max;

	insertNewTetromino(insertion_point_);
	active_tetromino_moved_ = true;
	rotate_button_pressed_ = false;
	grid_requires_update_ = false;

	control_time_ = millis();
	progress_time_ = millis();
	progress_delay_ms_ = 1000;
	control_delay_ms_ = 50;
}

GridMaster::~GridMaster() {
	delete(generator_);
	delete(active_tetromino_);
}

bool GridMaster::gridIsValid() {

	//check if the active tetromino is at the top of the grid and collided
	if(active_tetromino_->getMinYBoundary() == 0 && hasCollided(active_tetromino_)){
		return false;
	}

	return true;
}

void GridMaster::applyControllerInput(INPUTSHIELD_STATE_T& input_state) {

	//update the position of the active tetromino

	//limit the speed at which the tetromino moves across the grid
	if(millis() - control_time_ > control_delay_ms_){
		if(input_state.Left){
			if(attemptToUpdateActiveTetromino(-1,0)){
				active_tetromino_moved_ = true;
			}
		}else if(input_state.Right){
			if(attemptToUpdateActiveTetromino(1,0)){
				active_tetromino_moved_ = true;
			}
		}
		control_time_ = millis();
	}

	if(input_state.Down){
		if(attemptToUpdateActiveTetromino(0,1)){
			active_tetromino_moved_ = true;
		}
	}

	//check for rotation
	if(input_state.ButtonA){
		if(!rotate_button_pressed_){
			active_tetromino_->rotate90(grid_.getGridWidth()-1, grid_.getGridDepth()-1);

			if(!grid_.willTetrominoFitOnGrid(active_tetromino_)){
				//undo the rotation as it will not fit on the grid
				for(int i=0 ; i<3 ; i++){
					active_tetromino_->rotate90(grid_.getGridWidth()-1, grid_.getGridDepth()-1);
				}
			}

			active_tetromino_moved_ = true;
			rotate_button_pressed_ = true;
		}
	}else{
		rotate_button_pressed_ = false;
	}
}

bool GridMaster::attemptToUpdateActiveTetromino(short x_diff, short y_diff) {

	active_tetromino_->updatePosition(x_diff, y_diff);
	if(!grid_.willTetrominoFitOnGrid(active_tetromino_)){
		active_tetromino_->updatePosition(-x_diff, -y_diff);
	}else{
		return true;
	}
	return false;
}

int GridMaster::progress() {

	int lines_cleared = 0;

	//Has the tetromino collided with any other blocks in this new position
	if(hasCollided(active_tetromino_)){
		if(gridIsValid()){
			setTetrominoToGrid(active_tetromino_);
			delete(active_tetromino_);
			insertNewTetromino(insertion_point_);
		}
	}

	//Clear any complete lines
	lines_cleared = clearLines();
	if(lines_cleared > 0){
		//redraw the grid contents
		grid_requires_update_ = true;
	}

	if(millis() - progress_time_ > progress_delay_ms_) {

		//move the active tetromino 1 row down
		if(attemptToUpdateActiveTetromino(0,1)){
			active_tetromino_moved_ = true;
		}
		progress_time_ = millis();
	}

	return lines_cleared;
}

void GridMaster::drawGrid() {
	grid_.drawEmptyGrid();
}

void GridMaster::drawGridContents() {

	if(grid_requires_update_){
		grid_.drawOccupiedGridSquares();
		grid_requires_update_ = false;
	}

	if(active_tetromino_moved_){
		active_tetromino_->draw(grid_origin_, true);
		active_tetromino_moved_ = false;
	}
}

void GridMaster::insertNewTetromino(Coordinate start_position) {

	active_tetromino_ = generator_->takeNextTetromino();
	active_tetromino_moved_ = true;

	drawNextTetromino();
}

void::GridMaster::setTetrominoToGrid(Tetromino* tetromino) {

	//update the grid occupancy
	grid_.occupy(tetromino);
}

bool::GridMaster::hasCollided(Tetromino* tetromino) {

	//tetromino has collided if its lower edge is occupying a square adjacent to another occupied square
	return grid_.hasCollided(tetromino);
}

int::GridMaster::clearLines() {
	return grid_.clearLines();
}

void GridMaster::drawNextTetromino(){

	//clear the previous tetromino
	stroke(196,207,161);
	fill(196,207,161);
	drawrect(next_tetromino_origin_.x, next_tetromino_origin_.y, 48, 48);

	//draw the next
	Tetromino next = generator_->getNextTetromino();
	next.updatePosition(0-next.getMinXBoundary(),0-next.getMinYBoundary());
	next.draw(next_tetromino_origin_, false);
}

void::GridMaster::levelUp() {

	//starts on 2 second delay
	//this gives a maximum of 20 levels
	progress_delay_ms_ -= 100;
}

