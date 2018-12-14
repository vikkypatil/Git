#pragma once
#include <string>
class DataManager
{
	std::vector<std::string>m_data;
public:
	DataManager();
	~DataManager();
	void Save();
	void Load();
	void AddData(std::string data);

};

