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

		printf("���ڸ� �Է��� �ֽʽÿ� : ");
		expectedNum = _getch() - '0';
		printf("%d\n", expectedNum);
		if (!(expectedNum >= 1 && expectedNum <= 3)) {
			printf("�߸��� ������ �Է��Դϴ�.\n");
			printf("1���� 3 ������ ���ڸ� �Է��� �ֽʽÿ�.\n");
			result = false;
		}
	} while (!result);
}

void Player::displayExpectedNum() {
	printf("Player�� ���ڴ� %d�Դϴ�.\n", expectedNum);
}