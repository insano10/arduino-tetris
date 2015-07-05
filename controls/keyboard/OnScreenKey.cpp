/*
 * OnScreenKey.cpp
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#include "OnScreenKey.h"
#include "../../lib/SubPGraphics.h"

OnScreenKey::OnScreenKey(Coordinate draw_position, const uint8_t key_width, char value)
	: position_(draw_position),
	  key_width_(key_width),
	  value_(value){

}

OnScreenKey::~OnScreenKey() {
	// TODO Auto-generated destructor stub
}

void OnScreenKey::draw() {

	//square
	stroke(65,65,65);
	fill(196,207,161);
	drawrect(position_.x, position_.y, key_width_, key_width_);

	//with the character value inside
	text(value_,position_.x+(key_width_/3), position_.y+(key_width_/3));
}

char OnScreenKey::getValue() {
	return value_;
}
