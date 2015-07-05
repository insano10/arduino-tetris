/*
 * LandingScreen.cpp
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#include "LandingScreen.h"
#include "PlayScreen.h"
#include "../lib/SubPGraphics.h"
#include <avr/eeprom.h>
#include <util/delay.h>

LandingScreen::LandingScreen(InputShield* input_shield, HiScores* hi_score)
	: Screen(input_shield, hi_score){

}

LandingScreen::~LandingScreen() {
	// TODO Auto-generated destructor stub
}

void LandingScreen::activate(){

	stroke(65,65,65);
	fill(196,207,161);
	drawrect(0,0, 320,240);

	text("Tetris", 130,60);

	if(hi_score_->hiScoreExists()){
		text("HI SCORE:",110,90);
		text(hi_score_->getPlayerName(), 170, 90);
		text(hi_score_->getHiScore(), 190, 90);
	}else{
		text("No current HI SCORE", 110,90);
	}

	text("Press A to start", 110,120);

	pressAToContinue();

	//If button B is also being pressed, reset the hi score *SECRET COMBO*
	if(input_state_.ButtonB){
		hi_score_->resetHiScore();
		text("HI SCORE RESET", 120,140);
		_delay_ms(2000);
	}
}

Screen* LandingScreen::getNextScreen(){
	return new PlayScreen(input_shield_, hi_score_);
}
