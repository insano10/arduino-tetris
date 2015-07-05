/*
 * Grid.cpp
 *
 *  Created on: 19 Feb 2012
 *      Author: insano10
 */

#include "Grid.h"
#include "../lib/SubPGraphics.h"

Grid::Grid(Coordinate& grid_origin, uint8_t grid_spacing, uint8_t num_grid_rows, uint8_t num_grid_cols)
	: GRID_ORIGIN(grid_origin),
	  NUM_ROWS(num_grid_rows),
	  NUM_COLS(num_grid_cols),
	  GRID_SPACING(grid_spacing){

	Coordinate grid_max;
	grid_max.x = GRID_ORIGIN.x + (NUM_COLS * grid_spacing);
	grid_max.y = GRID_ORIGIN.y + (NUM_ROWS * grid_spacing);
	GRID_MAX = grid_max;

	occupancy_ = new GridBlock** [NUM_COLS];

	for(int i=0 ; i<NUM_COLS ; i++){

		occupancy_[i] = new GridBlock*[NUM_ROWS];

		for(int j=0 ; j<NUM_ROWS ; j++){
			occupancy_[i][j] = NULL;
		}
	}

	deleted_blocks_ = new GridBlock* [40];

	for(int i=0 ; i<40 ; i++){
		deleted_blocks_[i] = NULL;
	}
}

Grid::~Grid() {
	delete(occupancy_);
	delete(deleted_blocks_);
}

void Grid::drawEmptyGrid(){

	//cream background
	stroke(196,207,161);
	fill(196,207,161);
	drawrect(GRID_ORIGIN.x, GRID_ORIGIN.y, (GRID_MAX.x-GRID_ORIGIN.x), (GRID_MAX.y-GRID_ORIGIN.y));
}

void Grid::drawOccupiedGridSquares(){

	//clear the deleted blocks from the grid
	for(int i=0 ; i<40 ; i++){
		if(deleted_blocks_[i] != NULL){
			deleted_blocks_[i]->clear(GRID_ORIGIN);

			delete(deleted_blocks_[i]);
			deleted_blocks_[i] = NULL;
		}
	}

	//draw the remaining blocks in their updated positions
	for(int i=0 ; i<NUM_COLS ; i++){
		for(int j=NUM_ROWS-1 ; j>0 ; j--){
			if(occupancy_[i][j] != NULL){
				if(occupancy_[occupancy_[i][j]->getLastDrawPosition().x][occupancy_[i][j]->getLastDrawPosition().y] == NULL){
					//only clear the block if its last drawn position is now empty, otherwise it will be overwritten anyway
					occupancy_[i][j]->clear(GRID_ORIGIN);
				}
				occupancy_[i][j]->draw(GRID_ORIGIN, false);
			}
		}
	}
}

uint8_t Grid::getGridWidth(){
	return NUM_COLS;
}

uint8_t Grid::getGridDepth(){
	return NUM_ROWS;
}

void Grid::occupy(Tetromino* tetromino){

	//set the grid squares occupied by the tetromino blocks
	for(int i=0 ; i<4 ; i++){
		occupancy_[tetromino->getBlockCoordinate(i).x][tetromino->getBlockCoordinate(i).y] = tetromino->blocks_[i];
	}
}

bool Grid::hasCollided(Tetromino* tetromino){

	//check if there exists an occupied square below any of the tetromino's blocks
	//if so, the tetromino is deemed collided and cannot progress any further
	for(int i=0 ; i<4 ; i++){
		if(tetromino->getBlockCoordinate(i).y == getGridDepth()-1){
			return true;
		}

		if(occupancy_[tetromino->getBlockCoordinate(i).x][tetromino->getBlockCoordinate(i).y+1] != NULL){
			return true;
		}
	}
	return false;
}

bool Grid::willTetrominoFitOnGrid(Tetromino* tetromino){

	//check if there are any existing blocks in the tetromino's position
	//also check the coordinates are not outside the border of the grid
	for(int i=0 ; i<4 ; i++){
		if(tetromino->getBlockCoordinate(i).x > getGridWidth()-1){
			return false;
		}
		if(tetromino->getBlockCoordinate(i).x < 0){
			return false;
		}
		if(tetromino->getBlockCoordinate(i).y > getGridDepth()-1){
			return false;
		}
		if(tetromino->getBlockCoordinate(i).y < 0){
			return false;
		}
		if(occupancy_[tetromino->getBlockCoordinate(i).x][tetromino->getBlockCoordinate(i).y] != NULL){
			return false;
		}
	}
	return true;
}

int::Grid::clearLines() {

	short lines_cleared = 0;
	short blocks_cleared = 0;
	bool has_line = false;

	for(int i=0 ; i<NUM_ROWS ; i++){

		has_line = true;

		//check each row for a complete line
		for(int j=0 ; j<NUM_COLS ; j++){
			if(occupancy_[j][i] == NULL){
				has_line = false;
				break;
			}
		}

		if(has_line){

			//save the deleted blocks so we can erase them from the grid later
			for(int k=0 ; k<NUM_COLS ; k++){
				if(occupancy_[k][i] != NULL){
					deleted_blocks_[blocks_cleared] = occupancy_[k][i];
					occupancy_[k][i] = NULL;
					blocks_cleared++;
				}
			}

			//shuffle the lines above down 1 row
			for(int j=i-1 ; j>=0 ; j--){
				for(int k=0 ; k<NUM_COLS ; k++){
					if(occupancy_[k][j] != NULL){
						occupancy_[k][j+1] = occupancy_[k][j];
						occupancy_[k][j+1]->updatePosition(0,1); //<- this causes issues
						occupancy_[k][j] = NULL;
					}
				}
			}
			lines_cleared++;
		}

	}

	return lines_cleared;
}
