//4-6-2022
//week 9 during class
//SECOND C++ Class
//Object_Oriented_Programming
//FILES


#include "Date.h"
#include <iostream>

using namespace std;

int main(void) {
	Date bday;
	int dy, mo, yr;
	cout << "Please enter your birthday (dd mm yyy): ";
	cin >> dy >> mo >> yr;
	bday.setDate(dy, mo, yr);
	bday.prnDate();
	bday.prnDateUS();
	cin >> dy;
	return(0);
}

/*when we press compile iit will take dat.cpp and date.h and it will compile an object file with class name
it will also take the source.cpp file and creates and obj file
the linker will take these two obj files and then it creates a project.exe*/