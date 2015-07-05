/*
 * NameEntryBox.h
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#ifndef NAMEENTRYBOX_H_
#define NAMEENTRYBOX_H_

#include <stdint.h>
#include "../../layout/Structures.h"

class NameEntryBox {

	public:
		NameEntryBox(Coordinate origin, uint8_t max_chars, uint8_t char_box_size);
		virtual ~NameEntryBox();

		bool isNameComplete();
		void enterChar(char c);
		void draw();
		char* getName();

	private:
		Coordinate origin_;
		uint8_t char_box_size_;
		char* name_;
		uint8_t max_chars_;
		uint8_t chars_entered_;
		const char UNENTERED_LETTER;
};

#endif /* NAMEENTRYBOX_H_ */
