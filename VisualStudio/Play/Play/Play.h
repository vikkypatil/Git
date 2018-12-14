#pragma once
#include "Decoder.h"
#include <string>
class Play
{
	Decoder *d;
public:
	Play(std::string fileName) {
		d = new Decoder(fileName);
	}
	~Play();
};

