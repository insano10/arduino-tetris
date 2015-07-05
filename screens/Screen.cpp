/*
 * Screen.cpp
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#include "Screen.h"
#include <util/delay.h>
#include "../lib/wiring.h"
#include "../lib/SubPGraphics.h"

Screen::Screen(InputShield* input_shield, HiScores* hi_score)
	: input_shield_(input_shield),
	  hi_score_(hi_score){

}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
}

void Screen::activate(){

}

Screen* Screen::getNextScreen(){
	return 0;
}

/**
 * Continue after the A button has been held for a given threshold period
 */
void Screen::pressAToContinue(){

	bool button_pressed = false;
	unsigned long press_start_time = 0;
	unsigned long press_threshold_ms = 70;

	while (true) {

		input_shield_->readInputShield(&input_state_);

		if(input_state_.ButtonA){
			if(!button_pressed){
				press_start_time = millis();
				button_pressed = true;
			}else{
				if(millis()-press_start_time > press_threshold_ms){
					break;
				}
			}
		}else{
			button_pressed = false;
		}

		_delay_ms(10);
	}
}
