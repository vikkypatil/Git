#pragma once
#include "FileStream.h"

class BufferStream : public Stream
{
	int Buffer{ 50 };
	Stream *s;
public:
	BufferStream(Stream *i);
	~BufferStream();
	void Write(std::string &s);
	std::string & Read();
};

