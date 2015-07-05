/*
 * NameEntryScreen.h
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#ifndef NAMEENTRYSCREEN_H_
#define NAMEENTRYSCREEN_H_

#include "Screen.h"

class NameEntryScreen : public Screen {

	public:
		NameEntryScreen(InputShield* input_shield, int player_score, HiScores* hi_score);
		virtual ~NameEntryScreen();

		void activate();
		Screen* getNextScreen();

	private:
		int player_score_;
};

#endif /* NAMEENTRYSCREEN_H_ */
