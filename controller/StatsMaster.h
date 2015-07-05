/*
 * StatsMaster.h
 *
 *  Created on: 28 Mar 2012
 *      Author: insano10
 */

#ifndef STATSMASTER_H_
#define STATSMASTER_H_

class StatsMaster {

	public:
		StatsMaster();
		virtual ~StatsMaster();

		bool notifyLinesCleared(int num_lines);

		int getScore();
		int getLevel();
		int getTotalLines();

	private:
		int curr_level_;
		int total_lines_;
		int lines_in_curr_level_;
		int score_;
};

#endif /* STATSMASTER_H_ */
