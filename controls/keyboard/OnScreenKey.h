/*
 * OnScreenKey.h
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#ifndef ONSCREENKEY_H_
#define ONSCREENKEY_H_

#include <stdint.h>
#include "../../layout/Structures.h"

class OnScreenKey {

	public:
		OnScreenKey(Coordinate draw_position, const uint8_t key_width, char value);
		virtual ~OnScreenKey();

		void draw();
		char getValue();

	private:
		Coordinate position_;
		const uint8_t key_width_;
		char value_;
};

#endif /* ONSCREENKEY_H_ */
