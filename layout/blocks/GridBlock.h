/*
 * GridBlock.h
 *
 *  Created on: 26 Feb 2012
 *      Author: insano10
 */

#ifndef GRIDBLOCK_H_
#define GRIDBLOCK_H_

#include "../Structures.h"
#include "BlockDrawingFunctions.h"

class GridBlock {
	public:
		GridBlock(uint8_t block_size, uint8_t grid_spacing, Coordinate start_position, drawFunction drawFunc);
		virtual ~GridBlock();

		Coordinate getCurrentPosition();
		Coordinate getLastDrawPosition();
		void updatePosition(short x_diff, short y_diff);

		void clear(Coordinate grid_origin);
		void draw(Coordinate grid_origin, bool force_redraw);

	private:
		Coordinate current_pos_;
		Coordinate last_drawn_pos_;
		const uint8_t BLOCK_SIZE;
		const uint8_t GRID_SPACING;

		drawFunction draw_func_;
};

#endif /* GRIDBLOCK_H_ */
