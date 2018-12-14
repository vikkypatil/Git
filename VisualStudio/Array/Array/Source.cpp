
#include "Array.h"
#include<iostream>
#include<thread>
void AddElements(Array &a)
{
	for(int i=0;i<5;i++)
		a.Add(i);
}
int main()
{
	Array a;
	AddElements(a);
	a.Display();
}