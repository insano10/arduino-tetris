/*
 * TBlock.h
 *
 *  Created on: 24 Mar 2012
 *      Author: insano10
 */

#ifndef TBLOCK_H_
#define TBLOCK_H_

#include "Tetromino.h"

class TBlock: public Tetromino {

	public:
		TBlock(uint8_t block_size, Coordinate start_position);
		virtual ~TBlock();
};

#endif /* TBLOCK_H_ */
