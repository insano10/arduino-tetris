/*
 * OnScreenKeyboard.h
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#ifndef ONSCREENKEYBOARD_H_
#define ONSCREENKEYBOARD_H_

#include <stdint.h>
#include "../../layout/Structures.h"
#include "../InputShield.h"
#include "OnScreenKey.h"

class OnScreenKeyboard {

	public:
		OnScreenKeyboard(Coordinate origin);
		virtual ~OnScreenKeyboard();

		void updateCursorPosition(INPUTSHIELD_STATE_T& input_state);
		char click();
		void draw();

	private:

		bool cursorHasMovedSinceLastDrawn();
		void drawCursor();

		const uint8_t BUTTON_WIDTH;
		const uint8_t GRID_WIDTH;
		const uint8_t GRID_HEIGHT;
		Coordinate origin_;
		Coordinate cursor_position_;
		Coordinate previous_cursor_position_;
		bool drawn_;

		OnScreenKey*** keys_;
};

#endif /* ONSCREENKEYBOARD_H_ */
