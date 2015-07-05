/*
 * TetrominoGenerator.cpp
 *
 *  Created on: 24 Mar 2012
 *      Author: insano10
 */

#include "TetrominoGenerator.h"

#include "../lib/wiring.h"
#include <stdlib.h>
#include "../lib/SubPGraphics.h"

#include "../tetrominos/Square.h"
#include "../tetrominos/SBlock.h"
#include "../tetrominos/ReverseSBlock.h"
#include "../tetrominos/LBlock.h"
#include "../tetrominos/ReverseLBlock.h"
#include "../tetrominos/TBlock.h"
#include "../tetrominos/LineBlock.h"

TetrominoGenerator::TetrominoGenerator(uint8_t block_size, Coordinate insertion_point) :
	BLOCK_SIZE(block_size),
	insertion_point_(insertion_point) {

	origin_point_.x = 0;
	origin_point_.y = 0;

	//todo: come up with a better seed as millis() is the time since the program started, not the time
	//so it is the same each time the hardware is powered on
	srand(millis());
	next_tetromino_ = getRandomTetromino();
}

TetrominoGenerator::~TetrominoGenerator() {
	delete(next_tetromino_);
}

//Get a copy of the next tetromino
Tetromino TetrominoGenerator::getNextTetromino(){
	return (*next_tetromino_);
}

//Get the next tetromino and generate a new one to be returned next time
Tetromino* TetrominoGenerator::takeNextTetromino(){

	Tetromino* return_tetromino = next_tetromino_;
	return_tetromino->updatePosition(insertion_point_.x, insertion_point_.y);

	//generate the next tetromino
	next_tetromino_ = getRandomTetromino();

	return return_tetromino;
}

Tetromino* TetrominoGenerator::getRandomTetromino() {

	Tetromino* tetromino = NULL;

	//tetromino index between 0 and 6
	switch(rand() % 7){

		case 0: tetromino = new LBlock(BLOCK_SIZE, origin_point_); break;
		case 1: tetromino = new LineBlock(BLOCK_SIZE, origin_point_); break;
		case 2: tetromino = new SBlock(BLOCK_SIZE, origin_point_); break;
		case 3: tetromino = new Square(BLOCK_SIZE, origin_point_); break;
		case 4: tetromino = new TBlock(BLOCK_SIZE, origin_point_); break;
		case 5: tetromino = new ReverseSBlock(BLOCK_SIZE, origin_point_); break;
		case 6: tetromino = new ReverseLBlock(BLOCK_SIZE, origin_point_); break;
	}

	for(int i=0 ; i<(rand()%4) ; i++){
		tetromino->rotate90(100,100);
	}

	return tetromino;
}
