#include "faculty.h"
#include <iostream>
#include <string>

faculty::faculty() {
	name;
	loyalty;
}
faculty::faculty(std::string name2, float loyalty2) {
	name = name2;
	loyalty = loyalty2;

}

faculty :: ~faculty() {
	name = "";
	loyalty = 0;
	
}

void faculty::print(faculty& fclt) {
	std::cout << "Faculty of " << name << std::endl;
	std::cout << "loyalty = " << loyalty << std::endl;

}