/*
 * TetrominoGenerator.h
 *
 *  Created on: 24 Mar 2012
 *      Author: insano10
 */

#ifndef TETROMINOGENERATOR_H_
#define TETROMINOGENERATOR_H_

#include "../tetrominos/Tetromino.h"

class TetrominoGenerator {

	public:
		TetrominoGenerator(uint8_t block_size, Coordinate insertion_point);
		virtual ~TetrominoGenerator();

		Tetromino getNextTetromino();
		Tetromino* takeNextTetromino();

	private:

		Tetromino* getRandomTetromino();

		const uint8_t BLOCK_SIZE;
		const Coordinate insertion_point_;
		Coordinate origin_point_;

		Tetromino* next_tetromino_;
};

#endif /* TETROMINOGENERATOR_H_ */
