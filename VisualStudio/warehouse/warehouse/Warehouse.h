#pragma once
#include <string>
#include "StockChange.h"
class Warehouse : public StockChange
{

public:
	Warehouse();
	~Warehouse();
	void Register(const std::string &item);
	void AddItem(const std::string &item);
};


