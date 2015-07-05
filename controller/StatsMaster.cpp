/*
 * StatsMaster.cpp
 *
 *  Created on: 28 Mar 2012
 *      Author: insano10
 */

#include "StatsMaster.h"

StatsMaster::StatsMaster() {
	curr_level_ = 1;
	total_lines_ = 0;
	lines_in_curr_level_ = 0;
	score_ = 0;
}

StatsMaster::~StatsMaster() {
	// TODO Auto-generated destructor stub
}

bool StatsMaster::notifyLinesCleared(int num_lines){

	bool level_up = false;

	if(num_lines > 0){

		total_lines_ += num_lines;
		lines_in_curr_level_ += num_lines;
		score_ += (num_lines*num_lines)*curr_level_;

		if(lines_in_curr_level_ >= 10){
			lines_in_curr_level_ -=10;
			curr_level_++;
			level_up = true;
		}
	}
	return level_up;
}

int StatsMaster::getScore(){
	return score_;
}

int StatsMaster::getLevel(){
	return curr_level_;
}

int StatsMaster::getTotalLines(){
	return total_lines_;
}
