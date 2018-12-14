#pragma once
#include <string>
#include <cstdlib>
class ObjectPool
{
	int m_Allocated{0};
	int m_Utilized{0};
	char *ptr{ NULL };
public:
	ObjectPool(int size) {
		ptr = (char*) malloc(size);
		if (NULL != ptr)
		{
			m_Allocated = size;
			m_Utilized = 0;
		}
	}
	~ObjectPool();
	void Assign(int data);
	int GetUtilizedMemory()
	{
		return m_Utilized;
	}
};

