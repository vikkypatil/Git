#include<iostream>
#include <conio.h>
#include <cstdlib>
#include <algorithm>
#include"Game.h"
using namespace std;

Game::Game():GameOver(false), BoardWidth(BOARDWIDTH), BoardHeight(BOARDHEIGHT),HeadPosition(0,0),FruitPosition(0,0), Score(0), Direction(STOP){
}


void Game::snakeSetUp() {
	Direction = STOP;
	HeadPosition.x = BOARDWIDTH / 2;
	HeadPosition.y = BOARDHEIGHT / 2;
}
void Game::fruitSetUp() {
	do {
		FruitPosition.x = rand() % BOARDWIDTH;
		FruitPosition.y = rand() % BOARDHEIGHT;
	} while (isSnake(FruitPosition.x, FruitPosition.y));

}
void Game::draw(){
	int x, y;
	system("CLS");
	for (x = 0; x < BOARDWIDTH+2; x++)
		cout << "#";
	cout << endl;
	
	for (y = 0; y < BOARDHEIGHT; y++)
	{
		cout << "#";
		for (x = 0; x < BOARDWIDTH; x++)
		{
			if ((HeadPosition.x == x) && (HeadPosition.y == y))
				cout << "O";
			else if(isSnake(x,y))
				cout << "o";
			else if((FruitPosition.x == x) && (FruitPosition.y == y))
				cout << "F";
			else
				cout << " ";
		}
		cout << "#" << endl;
		
	}
	for (x = 0; x < BOARDWIDTH + 2; x++)
		cout << "#";
	cout << endl<<"Score:" << Score;
}
void Game::input() 
{
	if (0 != _kbhit())
	{
		switch (_getch())
		{
		case 'A':
		case 'a':
			Direction = LEFT;
			//cout << "Left" <<endl;
			break;

		case 'S':
		case 's':
			Direction = DOWN;
			//cout << "Down"<<endl;
			break;


		case 'D':
		case 'd':
			Direction = RIGHT;
			//cout << "Right" << endl;
			break;

		case 'W':
		case 'w':
			Direction = UP;
			//cout << "Up" << endl;
			break;

		case 'X':
		case 'x':
			Direction = STOP;
			GameOver = 1;
			system("CLS");
			cout << "###########################" << endl;
			cout << "You pressed x: GAME OVER!!!" << endl;
			cout << "###########################" << endl;
			break;
		default:
			cout << "Invalid Selection. Please try Again." << endl;
		}
	}
}
void Game::logic() 
{
	Position PreviousPosition(HeadPosition.x, HeadPosition.y);
	switch(Direction)
	{
		case LEFT:
			HeadPosition.x -= 1;
			if (HeadPosition.x < 0)
				HeadPosition.x += BOARDWIDTH;
			break;

		case RIGHT:
			HeadPosition.x += 1;
			if (HeadPosition.x > (BOARDWIDTH-1))
				HeadPosition.x -= BOARDWIDTH;
			break;

		case UP:
			HeadPosition.y -= 1;
			if (HeadPosition.y < 0)
				HeadPosition.y += BOARDHEIGHT;
			break;

		case DOWN:
			HeadPosition.y += 1;
			if (HeadPosition.y > (BOARDHEIGHT-1))
				HeadPosition.y -= BOARDHEIGHT;
			break;

	}

	if ((HeadPosition.x == FruitPosition.x) && (HeadPosition.y == FruitPosition.y))
	{
		Score += 10;
		fruitSetUp();
		xyArray.push_back(PreviousPosition);
	}
	else
	{
		xyArray.push_back(PreviousPosition);
		xyArray.pop_front();
	}
	if (isSnake(HeadPosition.x, HeadPosition.y))
	{
		system("CLS");
		cout << "#################################\n";
		cout <<"THE SNAKE IS KILLED : GAME OVER!!!\n";
		cout <<"#################################\n";
		cout << "Score = " << Score;
		GameOver = true;
		while (1);

	}

}
void Game::debug() {
	cout << "BoardWidth=" << BoardWidth << endl;
	cout << "BoardHeight=" << BoardHeight << endl;
	cout << "HeadPosition=" << HeadPosition.x << "  " << HeadPosition.y << endl;
	cout << "HeadPosition=" << FruitPosition.x << "  " << FruitPosition.y << endl;
	cout << "Score=" << Score << endl;
	cout << "Direction=" << Direction << endl;
}

Position::Position(int x1, int y1):x(0),y(0)
{
	x = x1;
	y = y1;
}

bool Game::isSnake(int x, int y)
{
	if (!xyArray.empty())
	{
		Position P(x, y);
		//for (std::deque<Position>::iterator it = xyArray.begin(); it != xyArray.end(); ++it)
		//{
		//	Position temp = *it;
		//	if (temp.x == x && temp.y == y)
		//		return true;
		//}
		std::deque<Position>::iterator it;

		it = find(xyArray.begin(), xyArray.end(), P);
		if (it != xyArray.end())
			return true;
	}
	return false;
}