#pragma once
#include "State.h"
#include <iostream>

class Stoped : public State
{
public:
	Stoped();
	~Stoped();

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

