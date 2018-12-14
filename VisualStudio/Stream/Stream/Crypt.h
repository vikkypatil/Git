#pragma once
#include <string>
#include "Stream.h"
class Crypt : public Stream
{
	Stream *s;
public:
	Crypt();
	~Crypt();
	std::string & Read();
	void Write(std::string &s);
};

