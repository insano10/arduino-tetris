/*
 * LBlock.h
 *
 *  Created on: 24 Mar 2012
 *      Author: insano10
 */

#ifndef LBLOCK_H_
#define LBLOCK_H_

#include "Tetromino.h"

class LBlock : public Tetromino {

	public:
		LBlock(uint8_t block_size, Coordinate start_position);
		virtual ~LBlock();
};

#endif /* LBLOCK_H_ */
