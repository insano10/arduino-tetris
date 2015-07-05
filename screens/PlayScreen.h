/*
 * PlayScreen.h
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#ifndef PLAYSCREEN_H_
#define PLAYSCREEN_H_

#include "Screen.h"
#include "../controller/GridMaster.h"
#include "../controller/StatsMaster.h"

class PlayScreen : public Screen {

	public:
		PlayScreen(InputShield* input_shield, HiScores* hi_score);
		virtual ~PlayScreen();

		void activate();
		Screen* getNextScreen();

	private:
		void drawStats();
		void gameLoop();

		GridMaster* grid_master_;
		StatsMaster stats_;
};

#endif /* PLAYSCREEN_H_ */
