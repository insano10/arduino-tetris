/*
 * Tetromino.cpp
 *
 *  Created on: 19 Feb 2012
 *      Author: insano10
 */

#include "Tetromino.h"
#include "../lib/SubPGraphics.h"
#include "../utils/Math.h"

Tetromino::Tetromino(uint8_t block_size, Coordinate start_position)
	: BLOCK_SIZE(block_size) {

	curr_rotation_index_ = 0;
}

Tetromino::~Tetromino() {

}

Coordinate Tetromino::getBlockCoordinate(int block_index){
	return blocks_[block_index]->getCurrentPosition();
}

void Tetromino::updatePosition(short x_diff, short y_diff){

	//move all blocks the same amount
	for(int i=0 ; i<4 ; i++){
		blocks_[i]->updatePosition(x_diff, y_diff);
	}
}

void Tetromino::rotate90(uint8_t grid_width, uint8_t grid_depth) {

	//try the rotation to see if it fits within the space bounds

	//apply the relevant rotation transformation
	for(int i=0 ; i<4 ; i++){
		blocks_[i]->updatePosition(rotation_transforms_[curr_rotation_index_].transforms[i].x,
								   rotation_transforms_[curr_rotation_index_].transforms[i].y);
	}

	//calculate whether the blocks need shifting to remain inside the grid after rotation
	short x_shift = 0;
	short y_shift = 0;

	if(getMinXBoundary() < 0){
		x_shift += 0 - getMinXBoundary();
	}

	if(getMaxXBoundary() > grid_width){
		x_shift -= getMaxXBoundary() - grid_width;
	}

	if(getMinYBoundary() < 0){
		y_shift += 0 - getMinYBoundary();
	}

	if(getMaxYBoundary() > grid_depth){
		y_shift -= getMaxYBoundary() - grid_depth;
	}

	updatePosition(x_shift, y_shift);
	curr_rotation_index_ = (curr_rotation_index_+1)%4;
}

short Tetromino::getMinXBoundary() {
	return min(min(getBlockCoordinate(0).x,getBlockCoordinate(1).x), min(getBlockCoordinate(2).x, getBlockCoordinate(3).x));
}

short Tetromino::getMaxXBoundary() {
	return max(max(getBlockCoordinate(0).x, getBlockCoordinate(1).x), max(getBlockCoordinate(2).x, getBlockCoordinate(3).x));
}

short Tetromino::getMinYBoundary() {
	return min(min(getBlockCoordinate(0).y,getBlockCoordinate(1).y), min(getBlockCoordinate(2).y, getBlockCoordinate(3).y));
}

short Tetromino::getMaxYBoundary() {
	return max(max(getBlockCoordinate(0).y, getBlockCoordinate(1).y), max(getBlockCoordinate(2).y, getBlockCoordinate(3).y));
}

void Tetromino::draw(Coordinate grid_origin, bool force_redraw){

	for(int i=0 ; i<4 ; i++){
		blocks_[i]->clear(grid_origin);
	}

	for(int i=0 ; i<4 ; i++){
		blocks_[i]->draw(grid_origin, force_redraw);
	}
}
