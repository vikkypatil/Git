#include<iostream>
#include <conio.h>
#include"Game.h"
#include <windows.h>
using namespace std;
int main(void)
{
	Game gameObj;
	gameObj.snakeSetUp();
	gameObj.fruitSetUp();
	while (!gameObj.GameOver)
	{

		gameObj.draw();
		//Sleep(300);
		gameObj.input();
		gameObj.logic();
	}
	//gameObj.draw();
	//_getch();
	return 0;
}
