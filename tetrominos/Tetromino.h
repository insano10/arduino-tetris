/*
 * Tetromino.h
 *
 *  Created on: 19 Feb 2012
 *      Author: insano10
 */

#ifndef TETROMINO_H_
#define TETROMINO_H_

#include <stdint.h>
#include "../layout/Structures.h"
#include "../layout/blocks/GridBlock.h"

typedef struct {
	Coordinate transforms[4];
} ROTATION_T;

class Grid;

class Tetromino {

	friend class Grid;

	public:
		Tetromino(uint8_t block_size, Coordinate start_position);
		virtual ~Tetromino();

		Coordinate getBlockCoordinate(int block_index);
		void updatePosition(short x_diff, short y_diff);
		void rotate90(uint8_t grid_width, uint8_t grid_depth);
		void draw(Coordinate grid_origin, bool force_redraw);

		short getMinXBoundary();
		short getMaxXBoundary();
		short getMinYBoundary();
		short getMaxYBoundary();

	protected:

		//rotation transforms
		ROTATION_T rotation_transforms_[4];
		uint8_t curr_rotation_index_;

		//each tetromino is comprised of 4 blocks
		GridBlock* blocks_[4];
		uint8_t BLOCK_SIZE;

};

#endif /* TETROMINO_H_ */
