#pragma once
#include <iostream>
#include "faculty.h"
#include "student.h"
#include <string>
class stud_fclt : public student, public faculty
{
public:
	
	float  expel();
	stud_fclt(std::string name, float loyalty, std::string NPS, float karma, float success);
	void print();

	
};

