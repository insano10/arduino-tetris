/*
 * Square.h
 *
 *  Created on: 19 Feb 2012
 *      Author: insano10
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Tetromino.h"

class Square : public Tetromino {

	public:
		Square(uint8_t block_size, Coordinate start_position);
		virtual ~Square();
};

#endif /* SQUARE_H_ */
