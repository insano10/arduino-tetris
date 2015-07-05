/*
 * NameEntryBox.cpp
 *
 *  Created on: 1 May 2012
 *      Author: insano10
 */

#include "NameEntryBox.h"
#include "../../lib/SubPGraphics.h"

NameEntryBox::NameEntryBox(Coordinate origin, uint8_t max_chars, uint8_t char_box_size)
	: origin_(origin),
	  char_box_size_(char_box_size),
	  max_chars_(max_chars),
	  UNENTERED_LETTER('%'){

	name_ = new char[max_chars_];

	for(int i=0 ; i<max_chars_ ; i++){
		name_[i] = UNENTERED_LETTER;
	}

	chars_entered_ = 0;
}

NameEntryBox::~NameEntryBox() {
	delete(name_);
}

bool NameEntryBox::isNameComplete(){
	return (chars_entered_ == max_chars_);
}

void NameEntryBox::enterChar(char c){

	if(chars_entered_ < max_chars_){
		name_[chars_entered_] = c;
		chars_entered_++;
	}
}

void NameEntryBox::draw(){

	stroke(65,65,65);
	fill(196,207,161);

	drawrect(origin_.x, origin_.y - char_box_size_, (char_box_size_*max_chars_), char_box_size_);

	for(int i=0 ; i<max_chars_ ; i++){
		if(name_[i] != UNENTERED_LETTER){
			text(name_[i], origin_.x + (char_box_size_*i) + (char_box_size_/3), origin_.y - (2*char_box_size_/3));
		}
	}
}

char* NameEntryBox::getName(){
	return name_;
}
