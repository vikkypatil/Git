#pragma once
#include "Decoder.h"
class Mp3Decoder : public Decoder
{
public:
	Mp3Decoder(std::string fileName) : Decoder( fileName ){};
	~Mp3Decoder();

	std::string Decode(){

		//open the file and add +1 and return it
	}

};

