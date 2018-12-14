#pragma once
#include <string>
class Stream
{
public:
	virtual void Write(std::string &s) = 0;
	virtual std::string & Read() = 0;
};