#pragma once
#include "State.h"
#include <iostream>

class Paused : public State
{
public:
	Paused();
	~Paused();

	void Play()
	{
		std::cout << "Play" << std::endl;
	}

	void Next()
	{
		std::cout << "Next" << std::endl;
	}

	void Stop()
	{
		std::cout << "Stop" << std::endl;
	}

	void Previous()
	{
		std::cout << "Previous" << std::endl;
	}
};

