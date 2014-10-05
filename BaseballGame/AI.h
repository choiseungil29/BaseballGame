#pragma once

class Player;

class AI {
private:
	int correctNum;
public:
	AI();
	~AI();

	void update();

	bool compareNum(Player* player);

	void displayCorrectNum();
};