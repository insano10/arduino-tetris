/*
 * ReverseLBlock.h
 *
 *  Created on: 24 Mar 2012
 *      Author: insano10
 */

#ifndef REVERSELBLOCK_H_
#define REVERSELBLOCK_H_

#include "Tetromino.h"

class ReverseLBlock : public Tetromino {

	public:
		ReverseLBlock(uint8_t block_size, Coordinate start_position);
		virtual ~ReverseLBlock();
};
#endif /* REVERSELBLOCK_H_ */
