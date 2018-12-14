#pragma once
#include <string>
#include <vector>
#include "DataManager.h"
class Application
{
	DataManager m_DM;
public:
	Application();
	~Application();
	void Input();
	void Save();
	void Load();
};

