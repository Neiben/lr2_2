#pragma once
# include <iostream>
#include <string>	
class student
{
	std :: string NPS;
	float karma;
	float success;

public:
	student();
	student(std ::string NPS, float karma, float success );
	void print(student& stdnt);
	float expel(student& stdnt);
	~student();
};

