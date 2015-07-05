/*
 * OnScreenKeyboard.cpp
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#include "OnScreenKeyboard.h"
#include "../../lib/SubPGraphics.h"

OnScreenKeyboard::OnScreenKeyboard(Coordinate origin)
	: BUTTON_WIDTH(20),
	  GRID_WIDTH(7),
	  GRID_HEIGHT(4),
	  origin_(origin){

	cursor_position_.x = 0;
	cursor_position_.y = 0;
	previous_cursor_position_.x = 0;
	previous_cursor_position_.y = 0;
	drawn_ = false;

	keys_ = new OnScreenKey**[GRID_WIDTH];

	for(int i=0 ; i<GRID_WIDTH ; i++){
		keys_[i] = new OnScreenKey*[GRID_HEIGHT];
	}

	//row 1
	keys_[0][0] = new OnScreenKey(Coordinate(origin_.x + (0*BUTTON_WIDTH),origin_.y + (0*BUTTON_WIDTH)), BUTTON_WIDTH, 'A');
	keys_[1][0] = new OnScreenKey(Coordinate(origin_.x + (1*BUTTON_WIDTH),origin_.y + (0*BUTTON_WIDTH)), BUTTON_WIDTH, 'B');
	keys_[2][0] = new OnScreenKey(Coordinate(origin_.x + (2*BUTTON_WIDTH),origin_.y + (0*BUTTON_WIDTH)), BUTTON_WIDTH, 'C');
	keys_[3][0] = new OnScreenKey(Coordinate(origin_.x + (3*BUTTON_WIDTH),origin_.y + (0*BUTTON_WIDTH)), BUTTON_WIDTH, 'D');
	keys_[4][0] = new OnScreenKey(Coordinate(origin_.x + (4*BUTTON_WIDTH),origin_.y + (0*BUTTON_WIDTH)), BUTTON_WIDTH, 'E');
	keys_[5][0] = new OnScreenKey(Coordinate(origin_.x + (5*BUTTON_WIDTH),origin_.y + (0*BUTTON_WIDTH)), BUTTON_WIDTH, 'F');
	keys_[6][0] = new OnScreenKey(Coordinate(origin_.x + (6*BUTTON_WIDTH),origin_.y + (0*BUTTON_WIDTH)), BUTTON_WIDTH, 'G');

	//row 2
	keys_[0][1] = new OnScreenKey(Coordinate(origin_.x + (0*BUTTON_WIDTH),origin_.y + (1*BUTTON_WIDTH)), BUTTON_WIDTH, 'H');
	keys_[1][1] = new OnScreenKey(Coordinate(origin_.x + (1*BUTTON_WIDTH),origin_.y + (1*BUTTON_WIDTH)), BUTTON_WIDTH, 'I');
	keys_[2][1] = new OnScreenKey(Coordinate(origin_.x + (2*BUTTON_WIDTH),origin_.y + (1*BUTTON_WIDTH)), BUTTON_WIDTH, 'J');
	keys_[3][1] = new OnScreenKey(Coordinate(origin_.x + (3*BUTTON_WIDTH),origin_.y + (1*BUTTON_WIDTH)), BUTTON_WIDTH, 'K');
	keys_[4][1] = new OnScreenKey(Coordinate(origin_.x + (4*BUTTON_WIDTH),origin_.y + (1*BUTTON_WIDTH)), BUTTON_WIDTH, 'L');
	keys_[5][1] = new OnScreenKey(Coordinate(origin_.x + (5*BUTTON_WIDTH),origin_.y + (1*BUTTON_WIDTH)), BUTTON_WIDTH, 'M');
	keys_[6][1] = new OnScreenKey(Coordinate(origin_.x + (6*BUTTON_WIDTH),origin_.y + (1*BUTTON_WIDTH)), BUTTON_WIDTH, 'N');

	//row 3
	keys_[0][2] = new OnScreenKey(Coordinate(origin_.x + (0*BUTTON_WIDTH),origin_.y + (2*BUTTON_WIDTH)), BUTTON_WIDTH, 'O');
	keys_[1][2] = new OnScreenKey(Coordinate(origin_.x + (1*BUTTON_WIDTH),origin_.y + (2*BUTTON_WIDTH)), BUTTON_WIDTH, 'P');
	keys_[2][2] = new OnScreenKey(Coordinate(origin_.x + (2*BUTTON_WIDTH),origin_.y + (2*BUTTON_WIDTH)), BUTTON_WIDTH, 'Q');
	keys_[3][2] = new OnScreenKey(Coordinate(origin_.x + (3*BUTTON_WIDTH),origin_.y + (2*BUTTON_WIDTH)), BUTTON_WIDTH, 'R');
	keys_[4][2] = new OnScreenKey(Coordinate(origin_.x + (4*BUTTON_WIDTH),origin_.y + (2*BUTTON_WIDTH)), BUTTON_WIDTH, 'S');
	keys_[5][2] = new OnScreenKey(Coordinate(origin_.x + (5*BUTTON_WIDTH),origin_.y + (2*BUTTON_WIDTH)), BUTTON_WIDTH, 'T');
	keys_[6][2] = new OnScreenKey(Coordinate(origin_.x + (6*BUTTON_WIDTH),origin_.y + (2*BUTTON_WIDTH)), BUTTON_WIDTH, 'U');

	//row 4
	keys_[0][3] = new OnScreenKey(Coordinate(origin_.x + (0*BUTTON_WIDTH),origin_.y + (3*BUTTON_WIDTH)), BUTTON_WIDTH, 'V');
	keys_[1][3] = new OnScreenKey(Coordinate(origin_.x + (1*BUTTON_WIDTH),origin_.y + (3*BUTTON_WIDTH)), BUTTON_WIDTH, 'Q');
	keys_[2][3] = new OnScreenKey(Coordinate(origin_.x + (2*BUTTON_WIDTH),origin_.y + (3*BUTTON_WIDTH)), BUTTON_WIDTH, 'X');
	keys_[3][3] = new OnScreenKey(Coordinate(origin_.x + (3*BUTTON_WIDTH),origin_.y + (3*BUTTON_WIDTH)), BUTTON_WIDTH, 'Y');
	keys_[4][3] = new OnScreenKey(Coordinate(origin_.x + (4*BUTTON_WIDTH),origin_.y + (3*BUTTON_WIDTH)), BUTTON_WIDTH, 'Z');
	keys_[5][3] = new OnScreenKey(Coordinate(origin_.x + (5*BUTTON_WIDTH),origin_.y + (3*BUTTON_WIDTH)), BUTTON_WIDTH, '-');
	keys_[6][3] = new OnScreenKey(Coordinate(origin_.x + (6*BUTTON_WIDTH),origin_.y + (3*BUTTON_WIDTH)), BUTTON_WIDTH, '_');
}

OnScreenKeyboard::~OnScreenKeyboard() {
	// TODO Auto-generated destructor stub
}

void OnScreenKeyboard::updateCursorPosition(INPUTSHIELD_STATE_T& input_state){

	previous_cursor_position_.x = cursor_position_.x;
	previous_cursor_position_.y = cursor_position_.y;

	if(input_state.Left){
		if(cursor_position_.x-1 >= 0){
			cursor_position_.x -=1;
		}
	}

	if(input_state.Right){
		if(cursor_position_.x+1 < GRID_WIDTH){
			cursor_position_.x +=1;
		}
	}

	if(input_state.Up){
		if(cursor_position_.y-1 >= 0){
			cursor_position_.y -=1;
		}
	}

	if(input_state.Down){
		if(cursor_position_.y+1 < GRID_HEIGHT){
			cursor_position_.y +=1;
		}
	}
}

char OnScreenKeyboard::click(){
	return keys_[cursor_position_.x][cursor_position_.y]->getValue();
}

void OnScreenKeyboard::draw(){

	if(!drawn_){

		for(int i=0 ; i<GRID_WIDTH ; i++){
			for(int j=0 ; j<GRID_HEIGHT ; j++){
				keys_[i][j]->draw();
			}
		}

		drawCursor();

		//only need to draw the whole keyboard once
		drawn_ = true;
	}

	if(cursorHasMovedSinceLastDrawn()){

		//redrawn the key at the previous position to get rid of the old cursor graphic
		keys_[previous_cursor_position_.x][previous_cursor_position_.y]->draw();

		drawCursor();
	}

}

bool OnScreenKeyboard::cursorHasMovedSinceLastDrawn(){
	return previous_cursor_position_.x != cursor_position_.x || previous_cursor_position_.y != cursor_position_.y;
}

void OnScreenKeyboard::drawCursor(){

	stroke(255,0,0);

	//top line
	line(origin_.x + (cursor_position_.x * BUTTON_WIDTH), origin_.y + (cursor_position_.y * BUTTON_WIDTH),
		 origin_.x + (cursor_position_.x * BUTTON_WIDTH) + BUTTON_WIDTH, origin_.y + (cursor_position_.y * BUTTON_WIDTH));

	//bottom line
	line(origin_.x + (cursor_position_.x * BUTTON_WIDTH), origin_.y + (cursor_position_.y * BUTTON_WIDTH) + BUTTON_WIDTH,
		 origin_.x + (cursor_position_.x * BUTTON_WIDTH) + BUTTON_WIDTH, origin_.y + (cursor_position_.y * BUTTON_WIDTH) + BUTTON_WIDTH);

	//left line
	line(origin_.x + (cursor_position_.x * BUTTON_WIDTH), origin_.y + (cursor_position_.y * BUTTON_WIDTH),
		 origin_.x + (cursor_position_.x * BUTTON_WIDTH), origin_.y + (cursor_position_.y * BUTTON_WIDTH) + BUTTON_WIDTH);

	//right line
	line(origin_.x + (cursor_position_.x * BUTTON_WIDTH) + BUTTON_WIDTH, origin_.y + (cursor_position_.y * BUTTON_WIDTH),
		 origin_.x + (cursor_position_.x * BUTTON_WIDTH) + BUTTON_WIDTH, origin_.y + (cursor_position_.y * BUTTON_WIDTH) + BUTTON_WIDTH);
}
