/*
 * HiScores.cpp
 *
 *  Created on: 3 May 2012
 *      Author: insano10
 */

#include "HiScores.h"
#include <avr/eeprom.h>

HiScores::HiScores(uint8_t player_name_length)
	: player_name_length_(player_name_length),
	  VALID_DATA_FLAG(9),
	  DATA_FLAG_ADDRESS(1),
	  DATA_NAME_ADDRESS(DATA_FLAG_ADDRESS+1),
	  DATA_SCORE_ADDRESS(DATA_NAME_ADDRESS+player_name_length_+1){

	/*
	 * Example EEPROM data layout:
	 *
	 * Address: 1  2  3  4  5  6  7  8  9
	 * Value:   9  B  O  B /0  1  2  3
	 *
	 * Data flag = 9 = Valid data exists
	 * Name = BOB
	 * Score = 123
	 */
}

HiScores::~HiScores() {

}

bool HiScores::hiScoreExists(){

	uint8_t data_flag = eeprom_read_byte((uint8_t*)DATA_FLAG_ADDRESS);

	if(data_flag == VALID_DATA_FLAG){
		return true;
	}else{
		return false;
	}
}

void HiScores::resetHiScore(){
	eeprom_write_byte((uint8_t*)DATA_FLAG_ADDRESS,0);
}

void HiScores::setNewHiScore(char* player_name, int score){

	//flag to indicate valid data exists
	eeprom_write_byte((uint8_t*)DATA_FLAG_ADDRESS, VALID_DATA_FLAG);

	//save the player name
	for(int i=0 ; i<player_name_length_ ; i++){
		eeprom_write_byte((uint8_t*)(DATA_NAME_ADDRESS+i), player_name[i]);
	}
	//terminate the name array
	eeprom_write_byte((uint8_t*)(DATA_NAME_ADDRESS+player_name_length_), '\0');

	//save the player score
	eeprom_write_word((uint16_t*)(DATA_SCORE_ADDRESS), score);
}

char* HiScores::getPlayerName(){

	//extra character to include the terminating character
	char* player_name = new char[player_name_length_+1];

	for(int i=0 ; i<player_name_length_+1 ; i++){
		player_name[i] = eeprom_read_byte((uint8_t*)(DATA_NAME_ADDRESS+i));
	}

	return player_name;
}

int HiScores::getHiScore(){

	return eeprom_read_word((uint16_t*)(DATA_SCORE_ADDRESS));
}
