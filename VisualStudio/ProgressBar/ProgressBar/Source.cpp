#include "ProgreeeBar.h"
#include <iostream>
int main()
{
	int a;
	ProgreeeBar P;
	a = P.IntGetProgress();
	std::cout << a;
	P.SetProgress(a+50);
	P.Increment();
}