#pragma once
#include <string>
#include <iostream>
#include <fstream>
class Decoder {
	std::ofstream m_file;
public :
	Decoder(std::string s) {
		m_file.open(s);
	}
	~Decoder() {
		m_file.close();
	}
	std::string Decode() {
		//open the file and print it
		while (std::get(m_file))
		{
			cout << line << '\n';
		}
		
		
		m_file << "Writing this to a file.\n";
		
	}
};