/*
 * SBlock.cpp
 *
 *  Created on: 8 Mar 2012
 *      Author: insano10
 */

#include "SBlock.h"

#include "../utils/CPlusPlusUtilities.h"
#include "../layout/blocks/BlockDrawingFunctions.h"

SBlock::SBlock(uint8_t block_size, Coordinate start_position)
	: Tetromino(block_size, start_position){

	/*start the blocks off in their relative positions
	 *
	 *  01
	 * 23
	 */
	Coordinate block_0_start(start_position.x, start_position.y);
	Coordinate block_1_start(start_position.x+1, start_position.y);
	Coordinate block_2_start(start_position.x-1, start_position.y+1);
	Coordinate block_3_start(start_position.x, start_position.y+1);

	blocks_[0] = new GridBlock(block_size, block_size+1, block_0_start, drawSBlock);
	blocks_[1] = new GridBlock(block_size, block_size+1, block_1_start, drawSBlock);
	blocks_[2] = new GridBlock(block_size, block_size+1, block_2_start, drawSBlock);
	blocks_[3] = new GridBlock(block_size, block_size+1, block_3_start, drawSBlock);

	ROTATION_T transform0;
	ROTATION_T transform1;
	ROTATION_T transform2;
	ROTATION_T transform3;

	/*rotation 0:
	 *  1
	 *  03
	 *   2
	 */
	transform0.transforms[0].x = 0;
	transform0.transforms[0].y = 0;
	transform0.transforms[1].x = -1;
	transform0.transforms[1].y = -1;
	transform0.transforms[2].x = 2;
	transform0.transforms[2].y = 0;
	transform0.transforms[3].x = 1;
	transform0.transforms[3].y = -1;

	/*rotation 1:
	 *
	 *  01
	 * 23
	 */
	transform1.transforms[0].x = 0;
	transform1.transforms[0].y = 0;
	transform1.transforms[1].x = 1;
	transform1.transforms[1].y = 1;
	transform1.transforms[2].x = -2;
	transform1.transforms[2].y = 0;
	transform1.transforms[3].x = -1;
	transform1.transforms[3].y = 1;

	/*rotation 2:
	 * 1
	 * 03
	 *  2
	 */
	transform2.transforms[0].x = -1;
	transform2.transforms[0].y = 0;
	transform2.transforms[1].x = -2;
	transform2.transforms[1].y = -1;
	transform2.transforms[2].x = 1;
	transform2.transforms[2].y = 0;
	transform2.transforms[3].x = 0;
	transform2.transforms[3].y = -1;

	/*rotation 3:
	 *
	 *  01
	 * 23
	 */
	transform3.transforms[0].x = 1;
	transform3.transforms[0].y = 0;
	transform3.transforms[1].x = 2;
	transform3.transforms[1].y = 1;
	transform3.transforms[2].x = -1;
	transform3.transforms[2].y = 0;
	transform3.transforms[3].x = 0;
	transform3.transforms[3].y = 1;

	rotation_transforms_[0] = transform0;
	rotation_transforms_[1] = transform1;
	rotation_transforms_[2] = transform2;
	rotation_transforms_[3] = transform3;
}

SBlock::~SBlock() {
	// TODO Auto-generated destructor stub
}
