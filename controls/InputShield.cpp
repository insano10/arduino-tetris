/*
 * InputShield.cpp
 *
 *  Created on: 18 Feb 2012
 *      Author: insano10
 */

#include "InputShield.h"
#include "../lib/HardwareSerial.h"
#include "../lib/wiring.h"
#include "../utils/CPlusPlusUtilities.h"

InputShield::InputShield() {

	/* Start Serial Communications */
	Serial.begin(9600);
}

InputShield::~InputShield() {
	// TODO Auto-generated destructor stub
}

bool InputShield::inputDataAvailable(){
	return readDataSLIP();
}

void InputShield::readInputShield(INPUTSHIELD_STATE_T * control_state) {

	/* Read some serial data */
	if (readDataSLIP()) {

		//clear current control state
		control_state->Left = false;
		control_state->Right = false;
		control_state->Up = false;
		control_state->Down = false;

		/* Get the InputShield data */
		joy_lateral_ = ((unsigned char) input_buffer_[1] << 8) + (unsigned char) input_buffer_[0];
		joy_vertical_ = ((unsigned char) input_buffer_[3] << 8) + (unsigned char) input_buffer_[2];
		control_state->ButtonA = (unsigned char) input_buffer_[4];
		control_state->ButtonB = (unsigned char) input_buffer_[5];
		control_state->ButtonJoy = (unsigned char) input_buffer_[6];

		if(joy_lateral_ > 140){
			control_state->Left = true;
		}else if(joy_lateral_ < 110){
			control_state->Right = true;
		}

		if(joy_vertical_ > 140){
			control_state->Down = true;
		}else if(joy_vertical_ < 110){
			control_state->Up = true;
		}

		//invert the button states as they go low when pressed
		control_state->ButtonA = !control_state->ButtonA;
		control_state->ButtonB = !control_state->ButtonB;

		serialFlush(); //purge the serial data, so we don't overflow
	}
}

int InputShield::readDataSLIP() {

	int ii = 0;

	/* Wait for at least 2 bytes */
	if (serialAvailable()) {
		char inChar = Serial.read();

		/* Start of frame */
		if (inChar == 'S') {

			/* Keep reading bytes */
			while (1) {

				while (!serialAvailable()) {
					;
				}
				inChar = Serial.read();

				if (inChar == 'S') {
					break;
				}

				if (inChar == 'T') {
					while (!serialAvailable()) {
						;
					}
					inChar = Serial.read();
				}

				input_buffer_[ii++] = inChar;
			}
		}
	}

	return ii;
}
