#include <stdlib.h>
#include <stdio.h>
#include "AI.h"
#include "Player.h"

AI::AI() {
	correctNum = 0;
}

AI::~AI() {

}

void AI::update() {
	correctNum = rand() % 3 + 1;
}

bool AI::compareNum(Player* player) {
	if (player->getExpectedNum() == correctNum) {
		return true;
	}
	return false;
}

void AI::displayCorrectNum() {
	printf("AI의 숫자는 %d입니다.\n", correctNum);
}