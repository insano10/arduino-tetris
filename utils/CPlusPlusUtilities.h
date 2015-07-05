/*
 * CPlusPlusUtilities.h
 *
 *  Created on: 18 Feb 2012
 *      Author: insano10
 */
#ifndef CPLUSPLUSUTILITIES_H_
#define CPLUSPLUSUTILITIES_H_

#include <stdlib.h>

void * operator new(size_t size);
void operator delete(void * ptr);
void * operator new[](size_t size);
void operator delete[](void * ptr);

#endif /* CPLUSPLUSUTILITIES_H_ */
