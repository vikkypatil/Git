#include <iostream>
#include "FileStream.h"
#include "BufferStream.h"
int main()
{
	FileStream *f  = new FileStream;
	std::string ws,rs;
	ws = "HI";
	//f.Write(ws);
	BufferStream bs(f);
	//rs = f.Read();
	//std::cout << rs;

	
}