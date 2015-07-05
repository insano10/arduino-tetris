/*
 * BlockDrawingFunctions.h
 *
 *  Created on: 13 Mar 2012
 *      Author: insano10
 */

#ifndef BLOCKDRAWINGFUNCTIONS_H_
#define BLOCKDRAWINGFUNCTIONS_H_

#include<stdint.h>
#include "../Structures.h"

typedef void (*drawFunction)(Coordinate, Coordinate, uint8_t, uint8_t);

void drawSquareBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing);
void drawSBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing);
void drawTBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing);
void drawLineBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing);
void drawLBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing);
void drawReverseLBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing);
void drawReverseSBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing);


#endif /* BLOCKDRAWINGFUNCTIONS_H_ */
