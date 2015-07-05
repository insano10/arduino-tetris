/*
 * InputShield.h
 *
 *  Created on: 18 Feb 2012
 *      Author: insano10
 */

#ifndef INPUTSHIELD_H_
#define INPUTSHIELD_H_

typedef struct {
	bool Left;
	bool Right;
	bool Up;
	bool Down;
	bool ButtonA;
	bool ButtonB;
	bool ButtonJoy;
} INPUTSHIELD_STATE_T;

class InputShield {

	public:
		InputShield();
		virtual ~InputShield();

		bool inputDataAvailable();
		void readInputShield(INPUTSHIELD_STATE_T * control_state);

	private:
		int readDataSLIP();

		char input_buffer_[10];
		unsigned char joy_lateral_;
		unsigned char joy_vertical_;
};

#endif /* INPUTSHIELD_H_ */
