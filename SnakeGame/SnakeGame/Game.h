#pragma once
#ifndef GAME_H
#include <deque>
#include <vector>
#define BOARDWIDTH (20)
#define BOARDHEIGHT (20)
class Position
{
public:
	int x;
	int y;
public:
	Position(int x1, int y1);
	bool operator ==(Position const &obj) {
		
		if ((this->x == obj.x) && (this->y == obj.y))
			return true;
		return false;
	}
};

class Game {
public:
	enum ValidDirection
	{
		STOP,
		LEFT,
		RIGHT,
		UP,
		DOWN
	};
	bool GameOver;
	const int BoardWidth;
	const int BoardHeight;
	Position HeadPosition;
	Position FruitPosition;
	int Score;
	ValidDirection Direction;
	std::deque<Position> xyArray;
	//vector<int> y;
	Game();
	//~Game();
public:
	void snakeSetUp();
	void fruitSetUp();
	void draw();
	void input();
	void logic();
	void debug();
	bool isSnake(int,int);
};
#endif