#pragma once
class StockChange
{
	StockChange() {}
	~StockChange() {}
	void Subscribe(const std::string &item);
	void Unsubscribe(const std::string &item);
};