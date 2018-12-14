#pragma once
#include "Player.h"
class State
{
	Player *p;
public:
	State();
	~State();
	virtual void Play() = 0;
	virtual void Next() = 0;
	virtual void Stop() = 0;
	virtual void Previous() = 0;
};

