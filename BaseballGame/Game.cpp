#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Game.h"
#include "Player.h"
#include "AI.h"

Game::Game() {
	player = new Player();
	ai = new AI();

	ballCount = 0;
	strikeCount = 0;
}

Game::~Game() {
	delete player;
	delete ai;
}

void Game::start() {
	printf("야구게임을 시작합니다. 아무 키나 눌러주세요.\n");
	_getch();
	system("cls");
}

void Game::update() {
	for (int i = 0; i < 5; i++) {
		printf("%d회 입니다.\n", i + 1);

		player->update();
		ai->update();

		player->displayExpectedNum();
		ai->displayCorrectNum();

		bool result = ai->compareNum(player);
		if (result) {
			printf("스트라이크\n");
			strikeCount++;
		}
		else {
			printf("볼\n");
			ballCount++;
		}
		printf("%d회가 종료되었습니다. 아무키나 눌러주세요.", i + 1);
		_getch();
		system("cls");
	}
}

void Game::end() {
	printf("게임이 끝났습니다.\n");
	this->displayBallCount();
	this->displayStrikeCount();
	
}

void Game::displayBallCount() {
	printf("볼카운트 : %d\n", ballCount);
}

void Game::displayStrikeCount() {
	printf("스트라이크카운트 : %d\n", strikeCount);
}