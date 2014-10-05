#pragma once

class Player {
private:
	int expectedNum;
public:
	Player();
	~Player();

	void update();

	int getExpectedNum() { return expectedNum; }

	void displayExpectedNum();
};