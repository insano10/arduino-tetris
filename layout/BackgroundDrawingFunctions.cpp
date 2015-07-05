/*
 * BackgroundDrawingFunctions.cpp
 *
 *  Created on: 27 Mar 2012
 *      Author: insano10
 */

#include "../lib/SubPGraphics.h"

void drawBrick(int x, int y){

	//main block
	stroke(65,65,65);
	fill(139,149,109);
	drawrect(x,y,10,8);

	//highlight
	stroke(196,207,161);
	fill(196,207,161);
	drawrect(x+1,y+1,1,1);
}

void drawBackground(){

	//cream background
	stroke(196,207,161);
	fill(196,207,161);
	drawrect(0,0,320,240);

	//bricks
	for(int i=0 ; i<27 ; i++){
		//stagger the bricks
		//left side
		if(i%2==0){
			drawBrick(10,5+(i*8));
			drawBrick(20,5+(i*8));
			drawBrick(30,5+(i*8));
		}else{
			drawBrick(15,5+(i*8));
			drawBrick(25,5+(i*8));
			drawBrick(35,5+(i*8));
		}

		//right side
		if(i%2==0){
			drawBrick(155,5+(i*8));
			drawBrick(165,5+(i*8));
			drawBrick(175,5+(i*8));
		}else{
			drawBrick(160,5+(i*8));
			drawBrick(170,5+(i*8));
			drawBrick(180,5+(i*8));
		}
	}

	//cream panel
	stroke(196,207,161);
	fill(196,207,161);
	drawrect(185,44,100,35);

	//dark grey panels
	stroke(65,65,65);
	fill(65,65,65);

	//left
	drawrect(0,5,15,216);
	//right
	drawrect(185,5,100,26); //upper
	drawrect(185,62,100,159); //lower

	//mustard detail around score
	stroke(107,115,83);
	fill(107,115,83);
	drawrect(185,29,100,15);
	line(185,47,285,47);
	line(185,59,285,59);

	//cream lines
	stroke(196,207,161);
	line(15,5,15,221);
	line(185,5,185,221);
	line(185,29,320,29);

	//text boxes
	stroke(196,207,161);
	fill(196,207,161);

	//score
	drawrect(205,21,60,11);
	drawrect(207,19,56,15);

	//level
	drawrect(205,78,60,21);
	drawrect(207,76,56,25);

	//lines
	drawrect(205,110,60,21);
	drawrect(207,108,56,25);

	//next piece
	drawrect(207,152,56,52);
	drawrect(209,150,52,56);

	//text
	stroke(65,65,65);
	text("SCORE",221,23);
	text("LEVEL",221,80);
	text("LINES",221,112);
}




