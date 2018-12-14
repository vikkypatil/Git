#pragma once
#include "Stream.h"
#include <iostream>
#include <fstream>

class FileStream : public Stream
{
	std::string m_FileName{"FileStream.txt"};
	std::ofstream m_myfile;

public:
	FileStream();
	~FileStream();
	void Write(std::string &s);
	std::string & Read();
};

