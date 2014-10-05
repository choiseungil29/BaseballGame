#pragma once

class Player;
class AI;

class Game {
private:
	Player* player;
	AI* ai;

	int ballCount;
	int strikeCount;
public:
	Game();
	~Game();

	void start();
	void update();
	void end();

	void displayBallCount();
	void displayStrikeCount();
};