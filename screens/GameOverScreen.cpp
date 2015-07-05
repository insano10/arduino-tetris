/*
 * GameOverScreen.cpp
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#include "GameOverScreen.h"

#include "PlayScreen.h"
#include "NameEntryScreen.h"
#include "../lib/SubPGraphics.h"

GameOverScreen::GameOverScreen(InputShield* input_shield, int player_score, HiScores* hi_score)
	: Screen(input_shield, hi_score),
	  player_score_(player_score){

	if(hi_score_->hiScoreExists()){
		current_hi_score_ = hi_score_->getHiScore();
	}else{
		current_hi_score_ = 0;
	}
}

GameOverScreen::~GameOverScreen() {
	// TODO Auto-generated destructor stub
}

void GameOverScreen::activate(){

	stroke(65,65,65);
	fill(196,207,161);
	drawrect(50,80,210,60);
	text("GAME OVER",120,93);
	text("(Press A to continue)",77,115);

	pressAToContinue();
}

Screen* GameOverScreen::getNextScreen(){

	if(player_score_ > current_hi_score_){
		//the player has set a new hi score
		return new NameEntryScreen(input_shield_, player_score_, hi_score_);
	}else{
		return new PlayScreen(input_shield_, hi_score_);
	}
}
