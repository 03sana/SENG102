//LAB ASSIGNMENT 7
//Classwork


//CLASS WORK
//#include<iostream>
//using namespace std;
//
//void reversestr(char x[], int length);
//int strlength(char y[]);
//
//int main()
//{
//
//	char mystring[20];
//
//	cout << "Enter a string " << endl;
//	cin >> mystring;
//
//	int mystrlength;
//
//	mystrlength = strlength(mystring);
//
//	reversestr(mystring, mystrlength);
//
//}
//int strlength(char y[]) {
//
//	int i;
//	for (i = 0; y[i] !='\0'; ++i);
//	return i;
//	
//}
//void reversestr(char x[], int length) {
//
//	int j;
//	cout << "Reverse the string";
//	for (j = length - 1; j >= 0; --j) {
//
//		cout << x[j];
//	}
//
//	
//}


//calculate Box1 volume by taking all sides from the user
#include<iostream>
using namespace std;

class Box {
public:

	double height;
	double breadth;
	double length;
	double volume;


	void setSides(void);
	void calcVol(void);
	void prntRes(void);
};
int main() {

	class Box Box1;

	Box1.setSides();
	Box1.calcVol();
	Box1.prntRes();



}
void Box::setSides(void) { 

	cout << "Please enter sides: " << endl;
	cin >> height >> breadth >> length;
}
void  Box::calcVol(void) {

	volume = height * breadth * length;
}
void  Box::prntRes(void) {

	cout << "volume of this Box is" << volume << endl;

}