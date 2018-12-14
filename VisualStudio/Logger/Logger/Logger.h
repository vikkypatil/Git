#pragma once
#include <cstdio>
#include <string>
using namespace std;

class Logger
{
	FILE *m_Fp;
	string m_LogFile;
	string m_Tag;
	Logger();
	Logger(const string mFileName);
	//static Logger s_Instance;
	static Logger m_pInstance;
public:
	Logger(const Logger &) = delete;
	Logger &
	~Logger();
	void Log(const string &msg);
	void SetTag(const string &tag);
	const string & GetLogName()const {
		return m_LogFile;
	}
	const string & GetTag()const {
		return m_Tag;
	}
	static Logger & GetInstance();
};

