/*
 * SBlock.h
 *
 *  Created on: 8 Mar 2012
 *      Author: insano10
 */

#ifndef SBLOCK_H_
#define SBLOCK_H_

#include "Tetromino.h"

class SBlock : public Tetromino  {

	public:
		SBlock(uint8_t block_size, Coordinate start_position);
		virtual ~SBlock();

};

#endif /* SBLOCK_H_ */
