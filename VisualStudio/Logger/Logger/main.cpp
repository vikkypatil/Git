
#include "Logger.h"
#include <iostream>
Logger Logger::s_Instance;
void InitGS() {
	Logger &lg = Logger::GetInstance();
	lg.Log("Init graphic system");
}

void InitA() {
	Logger &lg = Logger::GetInstance();
	lg.Log("Init Ausio system");
}

int main()
{
	Logger& lg = Logger::GetInstance("myLogfile.txt");
	cout << "Log file is:" << lg.GetLogName()<< endl;
	lg.Log("Application has started");
	InitGS();
	InitA();
	lg.Log("Application has Ended");
}