
#include <util/delay.h>
#include "lib/wiring.h"
#include "lib/startup.h"
#include "lib/SubPGraphics.h"
#include "data/HiScores.h"
#include "controls/InputShield.h"
#include "screens/Screen.h"
#include "screens/LandingScreen.h"

void setup(InputShield* input_shield) {

	/* Clear the screen */
	background(0);

	/* Wait for serial connection */
	fill(0,0,0);
	stroke(255, 0, 0);
	text("Waiting for Arduino...", 5, 210);
	while (!input_shield->inputDataAvailable()) { }

}

int main(){

	//initialise screen
	init();

	//display the startup screen and fading logo
	sketchEarlyInits();

	InputShield* input_shield = new InputShield();

	uint8_t max_player_name_chars = 3;
	HiScores* hi_score = new HiScores(max_player_name_chars);

	Screen* screen = new LandingScreen(input_shield, hi_score);

	while(true){
		screen->activate();
		screen = screen->getNextScreen();
	}

	return 0;
}

