#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Player.h"

Player::Player() {
	expectedNum = 0;
}

Player::~Player() {

}

void Player::update() {

	bool result = true;
	do {
		result = true;

		printf("숫자를 입력해 주십시오 : ");
		expectedNum = _getch() - '0';
		printf("%d\n", expectedNum);
		if (!(expectedNum >= 1 && expectedNum <= 3)) {
			printf("잘못된 범위의 입력입니다.\n");
			printf("1부터 3 사이의 숫자를 입력해 주십시오.\n");
			result = false;
		}
	} while (!result);
}

void Player::displayExpectedNum() {
	printf("Player의 숫자는 %d입니다.\n", expectedNum);
}