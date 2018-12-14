#include "ObjectPool.h"
#include <iostream>
int main()
{
	ObjectPool o(100);
	o.Assign(4);
	std::cout<<o.GetUtilizedMemory();
}