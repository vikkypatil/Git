#pragma once
#include "BaseSingleton.h"

class AudioManager : public BaseSingleton<AudioManager>
{
	AudioManager();
	friend class BaseSingleton<AudioManager>;

public:
	~AudioManager();
};

