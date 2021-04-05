#pragma once
# include <iostream>
#include <string>	
class student
{
protected :
	std :: string NPS;
	float karma;
	float success;

public:
	student();
	student(std ::string NPS, float karma, float success );
	void print();
	float expel();

};

