#include "FileStream.h"
#include "iostream"


FileStream::FileStream()
{
}


FileStream::~FileStream()
{
}

std::string & FileStream::Read()
{
	std::cout << "Read" << std::endl; 	
	std::string s;
	return s;
}

void FileStream::Write(std::string &s)
{
	m_myfile.open(m_FileName);
	m_myfile << s <<"File stream Wrote\n" ;
	m_myfile.close();
}