#pragma once
#include <iostream>
#include <string>
class faculty
{
protected:
	std::string name;
	float loyalty;

public :
	faculty();
	void print();
	faculty(std::string name, float loyalty);
	
};

