//4-6-2022
//week 9 during class
//SECOND C++ Class
//Object_Oriented_Programming


//EXCERCISE 1: Get from user 30mid 40final 30lab and calc total 
//
//
//#include <iostream>
//using namespace std;
//
//class GradeBook {    //define a class
//
//private:          //private accessed only within class
//	int mid;
//	int fin;
//	int lab;
//	double tot;
//public:
//	void setGrds(void);
//	void calcTot(void);
//	void prntGrds(void);
//
//};
//
//int main(void) {
//
//	//craeting an object
//	GradeBook mygrd, hisgrd;
//
//	//using members of class
//	mygrd.setGrds();
//	mygrd.calcTot();
//	mygrd.prntGrds();
//	//mygrd.mid = 88; cannot access private members outside the class
//
//	// cout << mygrd.tot;
//	// ERROR tot member can't be accessed bec its private
//
//   /* hisgrd.setGrds();
//	hisgrd.calcTot();
//	hisgrd.prntGrds();
//}
//
//void GradeBook::setGrds(void) { //func can access all members without dot
//
//	cout << "Please enter midterm, final,and lab grades: " << endl;
//	cin >> mid >> fin >> lab;
//}
//void  GradeBook::calcTot(void) {
//
//	tot = .3 * mid + .4 * fin + .3 * lab;
//
//}
//void  GradeBook::prntGrds(void) {
//
//	cout << "your semster grade is " << tot << endl;
//
//}
//
///*************/
//
////EXCERCISE 2: Print user birthday 
//
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//class Date {
//private:
//	int day;
//	int month;
//	int year;
//
//public:
//	void setDate(int d, int m, int y);
//	void prnDate(void);
//};
//
//int main(void) {
//
//	Date bday;
//
//	int dy, mo, yr;
//
//	cout << "please enter your birthday (dd mm yyyy) : ";
//	cin >> dy >> mo >> yr;
//
//
//	bday.setDate(dy, mo, yr); //use object name to access the members
//	bday.prnDate();
//
//	return 0;
//}
//void Date::setDate(int d, int m, int y) {
//	day = d;
//	month = m;
//	year = y;
//}
//void  Date::prnDate(void) {
//	cout << "Date is " << day << "." << month << "." << year << endl;
//}
//
//
///*************/
////EXCERCISE 3: Print user birthday - iomanip library 
//
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//class Date {
//private:
//	int day;
//	int month;
//	int year;
//
//public:
//
//	void getDate(void);
//	void prnDate(void);
//};
//
//int main(void) {
//
//	Date bday;
//
//	bday.getDate();
//	bday.prnDate();
//
//	return 0;
//}
//
//void Date::getDate(void) { //filling class data directly
//
//	cout << "please enter your birthday (dd mm yyyy) : ";
//	cin >> day >> month >> year;
//
//
//}
//void  Date::prnDate(void) {
//
//	cout << setfill('0'); //insert 0 infront of value
//						  //setfill used only once
//	cout << "Date is ";
//	cout << setw(2) << day;  //setw for sevral int
//	cout << ".";
//	cout << setw(2) << month;
//	cout << ".";
//	cout << setw(4) << year << endl;
//
//}
//*/
/************/

//EXCERCISE 4: Print user birthday - string library

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Date {
private:
	int day;
	int month;
	int year;
public:
	void setDate(int d, int m, int y);
	void prnDate(void);
	void prnDateUS(void);
};
int main(void) {
	Date bday;
	int dy, mo, yr;
	cout << "Please enter your birthday (dd mm yyy): ";
	cin >> dy >> mo >> yr;
	bday.setDate(dy, mo, yr);
	bday.prnDate();
	bday.prnDateUS();
	return(0);
}

//print date  in 15.01.2001
void Date::setDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
void Date::prnDate(void) {
	cout << setfill('0');
	cout << setw(2) << day << ".";
	cout << setw(2) << month << ".";
	cout << year << endl;
}
// prints date in January 15, 2001
void Date::prnDateUS(void) {
	string mn;
	switch (month) {
	case 1: mn = "January"; break;
	case 2: mn = "February"; break;
	case 3: mn = "March"; break;
	case 4: mn = "April"; break;
	case 5: mn = "May"; break;
	case 6: mn = "June"; break;
	case 7: mn = "July"; break;
	case 8: mn = "August"; break;
	case 9: mn = "September"; break;
	case 10: mn = "October"; break;
	case 11: mn = "November"; break;
	case 12: mn = "December";
	}
	cout << mn << " ";
	cout << setfill('0');
	cout << setw(2) << day << ", ";
	cout << year << endl;
}

