/*
 * ReverseSBlock.h
 *
 *  Created on: 24 Mar 2012
 *      Author: insano10
 */

#ifndef REVERSESBLOCK_H_
#define REVERSESBLOCK_H_

#include "Tetromino.h"

class ReverseSBlock : public Tetromino {

	public:
		ReverseSBlock(uint8_t block_size, Coordinate start_position);
		virtual ~ReverseSBlock();
};

#endif /* REVERSESBLOCK_H_ */
