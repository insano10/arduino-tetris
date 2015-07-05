/*
 * LineBlock.cpp
 *
 *  Created on: 24 Mar 2012
 *      Author: insano10
 */

#include "LineBlock.h"

#include "../utils/CPlusPlusUtilities.h"
#include "../layout/blocks/BlockDrawingFunctions.h"
#include "../lib/SubPGraphics.h"
#include "../utils/Math.h"

LineBlock::LineBlock(uint8_t block_size, Coordinate start_position)
	: Tetromino(block_size, start_position){

	/*start the blocks off in their relative positions
	 *
	 * 0123
	 *
	 */
	Coordinate block_0_start(start_position.x, start_position.y);
	Coordinate block_1_start(start_position.x+1, start_position.y);
	Coordinate block_2_start(start_position.x+2, start_position.y);
	Coordinate block_3_start(start_position.x+3, start_position.y);

	blocks_[0] = new GridBlock(block_size, block_size+1, block_0_start, drawLineBlock);
	blocks_[1] = new GridBlock(block_size, block_size+1, block_1_start, drawLineBlock);
	blocks_[2] = new GridBlock(block_size, block_size+1, block_2_start, drawLineBlock);
	blocks_[3] = new GridBlock(block_size, block_size+1, block_3_start, drawLineBlock);

	ROTATION_T transform0;
	ROTATION_T transform1;
	ROTATION_T transform2;
	ROTATION_T transform3;

	/*rotation 0:
	 *  0
	 *  1
	 *  2
	 *  3
	 */
	transform0.transforms[0].x = 1;
	transform0.transforms[0].y = -1;
	transform0.transforms[1].x = 0;
	transform0.transforms[1].y = 0;
	transform0.transforms[2].x = -1;
	transform0.transforms[2].y = 1;
	transform0.transforms[3].x = -2;
	transform0.transforms[3].y = 2;

	/*rotation 1:
	 *
	 * 3210
	 *
	 */
	transform1.transforms[0].x = 2;
	transform1.transforms[0].y = 1;
	transform1.transforms[1].x = 1;
	transform1.transforms[1].y = 0;
	transform1.transforms[2].x = 0;
	transform1.transforms[2].y = -1;
	transform1.transforms[3].x = -1;
	transform1.transforms[3].y = -2;

	/*rotation 2:
	 *  3
	 *  2
	 *  1
	 *  0
	 */
	transform2.transforms[0].x = -1;
	transform2.transforms[0].y = 2;
	transform2.transforms[1].x = 0;
	transform2.transforms[1].y = 1;
	transform2.transforms[2].x = 1;
	transform2.transforms[2].y = 0;
	transform2.transforms[3].x = 2;
	transform2.transforms[3].y = -1;

	/*rotation 3:
	 *
	 * 0123
	 *
	 */
	transform3.transforms[0].x = -2;
	transform3.transforms[0].y = -2;
	transform3.transforms[1].x = -1;
	transform3.transforms[1].y = -1;
	transform3.transforms[2].x = 0;
	transform3.transforms[2].y = 0;
	transform3.transforms[3].x = 1;
	transform3.transforms[3].y = 1;

	rotation_transforms_[0] = transform0;
	rotation_transforms_[1] = transform1;
	rotation_transforms_[2] = transform2;
	rotation_transforms_[3] = transform3;
}

LineBlock::~LineBlock() {
	// TODO Auto-generated destructor stub
}

