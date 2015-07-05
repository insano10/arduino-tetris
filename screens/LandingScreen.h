/*
 * LandingScreen.h
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#ifndef LANDINGSCREEN_H_
#define LANDINGSCREEN_H_

#include "Screen.h"
#include "../data/HiScores.h"

class LandingScreen : public Screen {

	public:
		LandingScreen(InputShield* input_shield, HiScores* hi_score);
		virtual ~LandingScreen();

		void activate();
		Screen* getNextScreen();

};

#endif /* LANDINGSCREEN_H_ */
