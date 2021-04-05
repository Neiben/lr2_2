#include "faculty.h"
#include <iostream>
#include <string>


faculty::faculty(std::string name2, float loyalty2) {
	name = name2;
	loyalty = loyalty2;

}
faculty::faculty() {
	std::cout << "im constructor" << std :: endl;
}


void faculty::print() {
	std::cout << "Faculty of " << name << std::endl;
	std::cout << "loyalty = " << loyalty << std::endl;
}