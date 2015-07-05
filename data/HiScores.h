/*
 * HiScores.h
 *
 *  Created on: 3 May 2012
 *      Author: insano10
 */

#ifndef HISCORES_H_
#define HISCORES_H_

#include <stdint.h>

class HiScores {

	public:
		HiScores(uint8_t player_name_length);
		virtual ~HiScores();

		bool hiScoreExists();
		void resetHiScore();

		void setNewHiScore(char* player_name, int score);
		char* getPlayerName();
		int getHiScore();

	private:
		uint8_t player_name_length_;
		const uint8_t VALID_DATA_FLAG;
		const uint8_t DATA_FLAG_ADDRESS;
		const uint8_t DATA_NAME_ADDRESS;
		const uint8_t DATA_SCORE_ADDRESS;
};

#endif /* HISCORES_H_ */
