#include "BufferStream.h"
#include <iostream>


BufferStream::BufferStream(Stream *i)
{
	s = i;
}


BufferStream::~BufferStream()
{
}

void BufferStream::Write(std::string &msg)
{
	std::string updated = "Writing to buffer while streaming";
	s->Write(updated);
}
std::string & BufferStream::Read()
{
	std::cout << "Reading from buffer while streaming";
	std::string s;
	return s;
}