/*
 * CPlusPlusUtilities.cpp
 *
 *  Created on: 26 Feb 2012
 *      Author: insano10
 */


#include "CPlusPlusUtilities.h"
#include <stdlib.h>
#include "../lib/SubPGraphics.h"

void * operator new(size_t size) {
	return malloc(size);
}

void operator delete(void * ptr) {
	free(ptr);
}

void * operator new[](size_t size) {
	return malloc(size);
}

void operator delete[](void * ptr) {
	free(ptr);
}

