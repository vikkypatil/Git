#include "ObjectPool.h"


ObjectPool::~ObjectPool()
{
	if (NULL != ptr)
	{
		free(ptr);
		m_Utilized = 0;
	}
}
void ObjectPool::Assign(int data) 
{
	if (NULL != ptr)
	{
		std::memcpy((char*)&ptr[m_Utilized],(char*)&data,sizeof(int));
		m_Utilized += sizeof(int);
	}
	
}