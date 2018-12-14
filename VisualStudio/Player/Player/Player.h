#pragma once
enum PlayerState {
	PLAY,
	PAUSE,
	NEXT,
	PREVIOUS,
	STOP
};
#include "State.h"
class Player
{
	PlayerState m_currentState{ STOP };
	State m_pState;
public:
	Player();
	~Player();
	void Play();
	void Next();
	void Stop();
	void Previous();
	void Paused();
	void ChangeState(PlayerState ps);
};

