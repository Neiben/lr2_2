#pragma once
#include <iostream>
#include <string>
class faculty
{
	std::string name;
	float loyalty;

public :
	faculty();
	void print(faculty& fclt);
	faculty(std::string name, float loyalty);
	~faculty();
};

