/*
 * GridMaster.h
 *
 *  Created on: 3 Mar 2012
 *      Author: insano10
 */

#ifndef GRIDMASTER_H_
#define GRIDMASTER_H_

#include "TetrominoGenerator.h"
#include "../controls/InputShield.h"
#include "../layout/Structures.h"
#include "../layout/Grid.h"
#include "../lib/graphics.h"
#include "../tetrominos/Tetromino.h"
#include "../tetrominos/Square.h"

class GridMaster {

	public:
		GridMaster(Coordinate& grid_origin, Coordinate next_tetromino_origin, uint8_t grid_spacing, uint8_t grid_block_size,
				   uint8_t num_grid_rows, uint8_t num_grid_cols);
		virtual ~GridMaster();

		//return whether the grid is in a valid state for play
		bool gridIsValid();

		//Update the grid based on the given controller input
		void applyControllerInput(INPUTSHIELD_STATE_T& input_state);

		//progress the movement of the grid by 1 unit and clears lines if required
		int progress();

		//draw the grid its contents
		void drawGrid();
		void drawGridContents();

		//increase the speed of the falling tetromino
		void levelUp();

	private:

		//add the next tetromino to the grid ready to fall down
		void insertNewTetromino(Coordinate start_position);

		//add the tetromino to the grid occupancy array in its current position
		void setTetrominoToGrid(Tetromino* tetromino);

		//update the active tetromino with the given position offset if possible
		bool attemptToUpdateActiveTetromino(short x_diff, short y_diff);

		//draw the next tetromino waiting to enter the grid
		void drawNextTetromino();

		//check whether the given tetromino has collided with something
		bool hasCollided(Tetromino* tetromino);

		//detect and clear completed lines from the grid
		int clearLines();

		const uint8_t NUM_ROWS;
		const uint8_t NUM_COLS;
		const uint8_t GRID_SPACING;

		unsigned long progress_time_;
		unsigned long control_time_;
		unsigned int progress_delay_ms_;
		unsigned int control_delay_ms_;

		Grid grid_;
		TetrominoGenerator* generator_;
		Tetromino* active_tetromino_;

		Coordinate grid_origin_;
		Coordinate grid_max_;
		Coordinate insertion_point_;
		Coordinate next_tetromino_origin_;

		bool rotate_button_pressed_;
		bool active_tetromino_moved_;
		bool grid_requires_update_;
};

#endif /* GRIDMASTER_H_ */
