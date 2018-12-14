#pragma once
#include <vector>
#include <mutex>
class Array
{
	std::vector<int> v;
	std::mutex m;
	bool m_MultiThread{};
public:
	Array();
	~Array();
	void Add(int e);
	void Erase(int p);
	void Insert(int e,int p);
	int GetLength();
	void Assign(int e, int v, int p);
	int GetFirst();
	int GetLast();
	void Display();
};

