/*
 * BlockDrawingFunctions.cpp
 *
 *  Created on: 13 Mar 2012
 *      Author: insano10
 */

#include "BlockDrawingFunctions.h"
#include "../Structures.h"
#include "../../lib/SubPGraphics.h"

void drawSquareBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing){

	//cream fill
	stroke(65,65,65);
	fill(196,207,161);
	drawrect(grid_origin.x + (position.x * grid_spacing), grid_origin.y + (position.y * grid_spacing), block_size, block_size);

	//with a large dark grey square in the centre
	fill(65,65,65);
	drawrect(grid_origin.x + (position.x * grid_spacing)+(block_size/5)+1, grid_origin.y + (position.y * grid_spacing)+(block_size/5)+1, (3*block_size/5)-1, (3*block_size/5)-1);
	fill(0,0,0);
}

void drawSBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing){

	//light grey fill
	stroke(65,65,65);
	fill(139,149,109);
	drawrect(grid_origin.x + (position.x * grid_spacing), grid_origin.y + (position.y * grid_spacing), block_size, block_size);

	//with a small dark grey square in the centre
	stroke(139,149,109);
	fill(65,65,65);
	drawrect(grid_origin.x + (position.x * grid_spacing)+(2*block_size/5), grid_origin.y + (position.y * grid_spacing)+(2*block_size/5), (2*block_size/5), (2*block_size/5));
	fill(0,0,0);
}

void drawReverseSBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing){

	//dark grey fill
	stroke(65,65,65);
	fill(107,115,83);
	drawrect(grid_origin.x + (position.x * grid_spacing), grid_origin.y + (position.y * grid_spacing), block_size, block_size);

	//with a cream square in the centre
	fill(196,207,161);
	drawrect(grid_origin.x + (position.x * grid_spacing)+(2*block_size/5), grid_origin.y + (position.y * grid_spacing)+(2*block_size/5), (2*block_size/5), (2*block_size/5));
	fill(0,0,0);
}

void drawTBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing){

	//light grey fill
	stroke(65,65,65);
	fill(139,149,109);
	drawrect(grid_origin.x + (position.x * grid_spacing), grid_origin.y + (position.y * grid_spacing), block_size, block_size);

	//with a square with edges of cream and dark grey

	//right line
	stroke(65,65,65);
	line(grid_origin.x + (position.x * grid_spacing)+(block_size/5) + (3*block_size/5),
		 grid_origin.y + (position.y * grid_spacing)+(block_size/5) + 1,
		 grid_origin.x + (position.x * grid_spacing)+(block_size/5) + (3*block_size/5),
		 grid_origin.y + (position.y * grid_spacing)+(block_size/5) + (3*block_size/5));

	//left line
	stroke(196,207,161);
	line(grid_origin.x + (position.x * grid_spacing)+(block_size/5) + 1,
		 grid_origin.y + (position.y * grid_spacing)+(block_size/5),
		 grid_origin.x + (position.x * grid_spacing)+(block_size/5) + 1,
		 grid_origin.y + (position.y * grid_spacing)+(block_size/5) + (3*block_size/5));

	//top line
	stroke(196,207,161);
	line(grid_origin.x + (position.x * grid_spacing)+(block_size/5) + 1,
		 grid_origin.y + (position.y * grid_spacing)+(block_size/5) + 1,
		 grid_origin.x + (position.x * grid_spacing)+(block_size/5) + (3*block_size/5),
		 grid_origin.y + (position.y * grid_spacing)+(block_size/5) + 1);

	//bottom line
	stroke(65,65,65);
	line(grid_origin.x + (position.x * grid_spacing)+(block_size/5) + 1,
		 grid_origin.y + (position.y * grid_spacing)+(block_size/5) + (3*block_size/5),
		 grid_origin.x + (position.x * grid_spacing)+(block_size/5) + (3*block_size/5),
		 grid_origin.y + (position.y * grid_spacing)+(block_size/5) + (3*block_size/5));

	fill(0,0,0);
}

void drawLineBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing){

	//light grey block
	stroke(65,65,65);
	fill(139,149,109);
	drawrect(grid_origin.x + (position.x * grid_spacing), grid_origin.y + (position.y * grid_spacing), block_size, block_size);
	fill(0,0,0);
}

void drawLBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing){

	//dark grey fill
	stroke(65,65,65);
	fill(107,115,83);
	drawrect(grid_origin.x + (position.x * grid_spacing), grid_origin.y + (position.y * grid_spacing), block_size, block_size);
	fill(0,0,0);
}

void drawReverseLBlock(Coordinate grid_origin, Coordinate position, uint8_t block_size, uint8_t grid_spacing){

	//light grey fill
	stroke(65,65,65);
	fill(139,149,109);
	drawrect(grid_origin.x + (position.x * grid_spacing), grid_origin.y + (position.y * grid_spacing), block_size, block_size);

	//with a cream square in the centre
	fill(196,207,161);
	drawrect(grid_origin.x + (position.x * grid_spacing)+(2*block_size/5), grid_origin.y + (position.y * grid_spacing)+(2*block_size/5), (2*block_size/5), (2*block_size/5));
	fill(0,0,0);
}


