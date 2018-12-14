#include "Array.h"
#include "iostream"


Array::Array()
{
}


Array::~Array()
{
}

void Array::Add(int e)
{
	if(m_MultiThread)
		m.lock();
	v.push_back(e);
	if (m_MultiThread)
		m.unlock();
}
void Array::Erase(int p) 
{
	if (m_MultiThread)
		m.lock();
	v.erase(v.begin() + p);
	if (m_MultiThread)
		m.unlock();
}
void Array::Insert(int e, int p)
{
	if (m_MultiThread)
		m.lock();
	v.insert(v.begin(), e, p);
	if (m_MultiThread)
		m.unlock();
}
int Array::GetLength()
{
	return v.size();
}
void Array::Assign(int p, int e, int c)
{
	if (m_MultiThread)
		m.lock();
	v.insert(v.begin()+p, c, e);
	if (m_MultiThread)
		m.unlock();
}
int Array::GetFirst()
{
	return v.front();
}
int Array::GetLast()
{
	return v.back();
}
void Array::Display()
{
	for (int i = 0; i < GetLength(); i++)
	{
		std::cout << v[i] << std::endl;
	}
}