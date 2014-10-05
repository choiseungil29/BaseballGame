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
	printf("�߱������� �����մϴ�. �ƹ� Ű�� �����ּ���.\n");
	_getch();
	system("cls");
}

void Game::update() {
	for (int i = 0; i < 5; i++) {
		printf("%dȸ �Դϴ�.\n", i + 1);

		player->update();
		ai->update();

		player->displayExpectedNum();
		ai->displayCorrectNum();

		bool result = ai->compareNum(player);
		if (result) {
			printf("��Ʈ����ũ\n");
			strikeCount++;
		}
		else {
			printf("��\n");
			ballCount++;
		}
		printf("%dȸ�� ����Ǿ����ϴ�. �ƹ�Ű�� �����ּ���.", i + 1);
		_getch();
		system("cls");
	}
}

void Game::end() {
	printf("������ �������ϴ�.\n");
	this->displayBallCount();
	this->displayStrikeCount();
	
}

void Game::displayBallCount() {
	printf("��ī��Ʈ : %d\n", ballCount);
}

void Game::displayStrikeCount() {
	printf("��Ʈ����ũī��Ʈ : %d\n", strikeCount);
}