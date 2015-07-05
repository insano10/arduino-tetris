/*
 * GridBlock.cpp
 *
 *  Created on: 26 Feb 2012
 *      Author: insano10
 */

#include "GridBlock.h"
#include "../../lib/SubPGraphics.h"

GridBlock::GridBlock(uint8_t block_size, uint8_t grid_spacing, Coordinate start_position, drawFunction draw_func):
	BLOCK_SIZE(block_size),
	GRID_SPACING(grid_spacing),
	draw_func_(draw_func){

	current_pos_.x = start_position.x;
	current_pos_.y = start_position.y;

	last_drawn_pos_.x = -1;
	last_drawn_pos_.y = -1;

}

GridBlock::~GridBlock() {
	// TODO Auto-generated destructor stub
}

Coordinate GridBlock::getCurrentPosition(){
	return current_pos_;
}

Coordinate GridBlock::getLastDrawPosition(){
	return last_drawn_pos_;
}

void GridBlock::updatePosition(short x_diff, short y_diff){

	current_pos_.x += x_diff;
	current_pos_.y += y_diff;
}

void GridBlock::clear(Coordinate grid_origin){

	if(last_drawn_pos_.y >= 0){
		stroke(196,207,161);
		fill(196,207,161);
		drawrect(grid_origin.x + (last_drawn_pos_.x * GRID_SPACING), grid_origin.y + (last_drawn_pos_.y * GRID_SPACING), BLOCK_SIZE, BLOCK_SIZE);
	}
}

void GridBlock::draw(Coordinate grid_origin, bool force_redraw){

	//only draw the block if it has moved or a redraw is forced
	if((current_pos_.x != last_drawn_pos_.x || current_pos_.y != last_drawn_pos_.y) || force_redraw){

		//only draw once the block has entered the bounds of the grid
		if(current_pos_.y >= 0){
			(*draw_func_)(grid_origin, current_pos_, BLOCK_SIZE, GRID_SPACING);

			last_drawn_pos_.x = current_pos_.x;
			last_drawn_pos_.y = current_pos_.y;
		}
	}
}
