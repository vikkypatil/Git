#pragma once
#include "State.h"
#include <iostream>
class Playing : public State
{
public:
	Playing();
	~Playing();

	void Play()
	{
		std::cout << "Paused" << std::endl;
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

