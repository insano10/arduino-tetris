/*
 * PlayScreen.cpp
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#include "PlayScreen.h"
#include "GameOverScreen.h"
#include "../layout/BackgroundDrawingFunctions.h"
#include "../lib/SubPGraphics.h"

PlayScreen::PlayScreen(InputShield* input_shield, HiScores* hi_score)
	: Screen(input_shield, hi_score){

}

PlayScreen::~PlayScreen() {
	// TODO Auto-generated destructor stub
}

void PlayScreen::activate(){

	drawBackground();

	Coordinate grid_origin(40,5);
	Coordinate next_tetromino_origin(211,154);

	grid_master_ = new GridMaster(grid_origin, next_tetromino_origin, 12, 11, 18, 10);
	grid_master_->drawGrid();
	drawStats();

	//run the main game loop
	gameLoop();

}

Screen* PlayScreen::getNextScreen(){
	return new GameOverScreen(input_shield_, stats_.getScore(), hi_score_);
}

void PlayScreen::gameLoop(){

	int new_lines = 0;

	long curr_time_ = millis();

	while (grid_master_->gridIsValid()) {

		/* Read the inputshield data */
		input_shield_->readInputShield(&input_state_);

		//limit to 40 frames/sec
		if(millis() - curr_time_ > (1000/40)){

			new_lines = grid_master_->progress();
			grid_master_->applyControllerInput(input_state_);
			grid_master_->drawGridContents();

			if(stats_.notifyLinesCleared(new_lines)){
				grid_master_->levelUp();
			}

			if(new_lines > 0){
				drawStats();
			}

			curr_time_ = millis();
		}
	}
}

void PlayScreen::drawStats(){
	stroke(65,65,65);
	fill(196,207,161);
	text(stats_.getScore(),228,50);
	text(stats_.getLevel(),228,91);
	text(stats_.getTotalLines(),228,123);
}
