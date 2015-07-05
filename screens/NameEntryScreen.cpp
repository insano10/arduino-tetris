/*
 * NameEntryScreen.cpp
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#include "NameEntryScreen.h"
#include "LandingScreen.h"
#include "../controls/keyboard/OnScreenKeyboard.h"
#include "../controls/keyboard/NameEntryBox.h"
#include "../lib/SubPGraphics.h"
#include <avr/eeprom.h>

NameEntryScreen::NameEntryScreen(InputShield* input_shield, int player_score, HiScores* hi_score)
	: Screen(input_shield, hi_score),
	  player_score_(player_score){

}

NameEntryScreen::~NameEntryScreen() {
	// TODO Auto-generated destructor stub
}

void NameEntryScreen::activate(){

	Coordinate keyboard_origin(90,100);
	OnScreenKeyboard keyboard(keyboard_origin);
	NameEntryBox nameBox(keyboard_origin,3,20);

	stroke(65,65,65);
	fill(196,207,161);
	drawrect(0,0, 320,240);

	text("Congratulations!", 90, 30);
	text("HI SCORE: ", 90,45);
	text(player_score_, 160, 45);
	text("Enter your name:", 90, 60);

	keyboard.draw();
	nameBox.draw();

	long curr_time = millis();
	bool enter_pressed = false;

	//read in the user's name
	while (!nameBox.isNameComplete()) {

		input_shield_->readInputShield(&input_state_);

		if(millis() - curr_time > (1000/10)){
			keyboard.updateCursorPosition(input_state_);

			if(input_state_.ButtonA){
				if(!enter_pressed){
					nameBox.enterChar(keyboard.click());
					nameBox.draw();
					enter_pressed = true;
				}
			}else{
				enter_pressed = false;
			}

			keyboard.draw();
			curr_time = millis();
		}
	}

	char* player_name = nameBox.getName();

	hi_score_->setNewHiScore(player_name, player_score_);

	stroke(65,65,65);
	fill(196,207,161);
	drawrect(55,80,240,60);
	text("(Press A to start a new game)",80,110);

	pressAToContinue();
}

Screen* NameEntryScreen::getNextScreen(){
	return new LandingScreen(input_shield_, hi_score_);
}
