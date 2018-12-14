#include "Logger.h"
#include <windows.h>


Logger::Logger()
{
	//m_Fp = fopen("Log.txt", "w");
	char file[255]{};
	GetModuleFileNameA(GetModuleFileName);
	m_LogFile = file;
	m_Fp = fopen(m_LogFile.c_str
}

Logger::~Logger()
{
	fclose(m_Fp);
}

Logger::Logger(const string mFileName) : m_LogFile(mFileName)
{
	
}

void Logger::Log(const string &msg)
{
	fprintf(m_Fp, "%s\n", msg.c_str());
}

void Logger::SetTag(const string &tag)
{
	m_Tag = tag;
}

Logger & Logger::GetInstance()
{
	return s_Instance;
}