#include "student.h"
# include <iostream>
#include <string>

student::student() {
	NPS;
	karma;
	success;
}

student::student(std::string NPS2, float karma2, float success2) {
	NPS = NPS2;
	karma = karma2;
	success = success2;
}

void student::print(student& stdnt) {
	std::cout << "pupil`s NPS : " << NPS << std :: endl;
	std::cout << "pupil`s karma = " << karma << std::endl;
	std::cout << "implemenation of the curriculum : " << success << std :: endl;
}

float student::expel(student& stdnt) {
	float a = 1 - karma - success;
	std::cout << "probability of exclussion = " << a << std::endl;
	return a;
}
student :: ~student() {
	NPS = "";
	karma = 0;
	success = 0;
}
