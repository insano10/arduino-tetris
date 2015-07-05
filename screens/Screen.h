/*
 * Screen.h
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include "../controls/InputShield.h"
#include "../data/HiScores.h"

class Screen {

	public:
		Screen(InputShield* input_shield, HiScores* hiScore);
		virtual ~Screen();

		virtual void activate();
		virtual Screen* getNextScreen();

	protected:

		void pressAToContinue();

		INPUTSHIELD_STATE_T input_state_;
		InputShield* input_shield_;
		HiScores* hi_score_;
};

#endif /* SCREEN_H_ */
