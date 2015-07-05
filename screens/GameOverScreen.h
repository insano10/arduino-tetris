/*
 * GameOverScreen.h
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#ifndef GAMEOVERSCREEN_H_
#define GAMEOVERSCREEN_H_

#include "Screen.h"

class GameOverScreen : public Screen {

	public:
		GameOverScreen(InputShield* input_shield, int player_score, HiScores* hi_score);
		virtual ~GameOverScreen();

		void activate();
		Screen* getNextScreen();

	private:
		int player_score_;
		int current_hi_score_;
};

#endif /* GAMEOVERSCREEN_H_ */
