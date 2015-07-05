/*
 * LineBlock.h
 *
 *  Created on: 24 Mar 2012
 *      Author: insano10
 */

#ifndef LINEBLOCK_H_
#define LINEBLOCK_H_

#include "Tetromino.h"

class LineBlock : public Tetromino {

	public:
		LineBlock(uint8_t block_size, Coordinate start_position);
		virtual ~LineBlock();
};

#endif /* LINEBLOCK_H_ */
