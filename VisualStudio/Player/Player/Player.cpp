#include "Player.h"
#include <iostream>

Player::Player()
{
}


Player::~Player()
{
}

void Player::ChangeState(PlayerState ps)
{
	switch (m_currentState)
	{
	case(PLAY):
		switch (ps)
		{
		case(PLAY):
			Paused();
			break;
		case(NEXT):
			Next();
			Play();
			break;
		case(STOP):
			Stop();
			break;
		case(PREVIOUS):
			Previous();
			Play();
			break;
		}
		break;
	case(PAUSE):
		switch (ps)
		{
		case(PLAY):
			Play();
			break;
		case(NEXT):
			Next();
			break;
		case(STOP):
			Stop();
			break;
		case(PREVIOUS):
			Previous();
			break;
		}
		break;
	case(STOP):
		switch (ps)
		{
		case(PLAY):
			Play();
			break;
		case(NEXT):
			Next();
			break;
		case(STOP):
			break;
		case(PREVIOUS):
			Previous();
			break;
		}
		break;
	}
}
void Player::Play()
{
	std::cout << "Play"<< std::endl;
	m_currentState = PLAY;
}

void Player::Next()
{
	std::cout << "Next" << std::endl;
}

void Player::Stop()
{
	std::cout << "Stop" << std::endl;
	m_currentState = STOP;
}

void Player:: Previous()
{
	std::cout << "Previous" << std::endl;
}

void Player::Paused()
{
	std::cout << "Paused" << std::endl;
	m_currentState = PAUSE;
}
