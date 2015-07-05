/*
 * Grid.h
 *
 *  Created on: 19 Feb 2012
 *      Author: insano10
 */

#ifndef GRID_H_
#define GRID_H_

#include "../lib/graphics.h"
#include "Structures.h"
#include "blocks/GridBlock.h"
#include "../tetrominos/Tetromino.h"

class Grid {

	public:
		Grid(Coordinate& grid_origin, uint8_t grid_spacing, uint8_t num_grid_rows, uint8_t num_grid_cols);
		virtual ~Grid();

		void drawEmptyGrid();
		void drawOccupiedGridSquares();

		uint8_t getGridWidth();
		uint8_t getGridDepth();

		void occupy(Tetromino* tetromino);
		bool hasCollided(Tetromino* tetromino);
		bool willTetrominoFitOnGrid(Tetromino* tetromino);
		int clearLines();

	private:
		const Coordinate GRID_ORIGIN;
		Coordinate GRID_MAX;
		const uint8_t NUM_ROWS;
		const uint8_t NUM_COLS;
		const uint8_t GRID_SPACING;
		GridBlock*** occupancy_;
		GridBlock** deleted_blocks_;
};

#endif /* GRID_H_ */
