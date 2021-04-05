#include "stud_fclt.h"
#include <iostream>
#include "faculty.h"
#include "student.h"
#include <string>
using namespace std;
stud_fclt::stud_fclt(std::string name2, float loyalty2, std::string NPS2, float karma2, float success2) {
	name = name2;
	loyalty = loyalty2;
	NPS = NPS2;
	karma = karma2;
	success = success2;
}

float stud_fclt::expel() {
	float b;
	b =  student::expel() + loyalty;
	cout << "new chance of expel = " << b;
	return b;
}

void stud_fclt::print() {
	cout << "Faculty of " << name << endl;
	cout << "loyalty = " << loyalty << endl;
	cout << "pupil`s NPS : " << NPS << endl;
	cout << "pupil`s karma = " << karma << endl;
	cout << "implemenation of the curriculum : " << success << endl;
}