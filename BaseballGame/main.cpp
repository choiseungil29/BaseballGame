#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Game.h"

int main() {

	srand((unsigned)time(NULL));

	Game* game = new Game();

	game->start();
	game->update();
	game->end();

	return 0;
}