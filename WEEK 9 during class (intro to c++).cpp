//3-30-2022
//week 8 during class 
//FIRST C++ Class


/*************************************************************START***************************************************************/

//My first C++ program 

/*#include<iostream>
int main(void) {

	std::cout << "Hello, world!" << std:: endl; 
	return 0;

} */

/**********************************************************************/


// My second c++ program 
//Adding two numbers

/*
using std::cin;
using std::cout;
using std::endl;
*/

/*#include<iostream>
using namespace std;
int main(void) {

	int x, y;

	//get x and y from user 
	cout << "please enter two integers: ";
	cin >> x >> y;

	//display sum
	cout <<"the sum is:"<< x + y <<"\n"; //cout for message in double quotes or one variable or an expression
	return 0;


}
 */


#include<iostream>
using namespace std;
int main(void) {

	int x, y;

	cout << "enter two numbers : " << endl;
	cin >> x >> y;

	cout << "the sum is " << x + y << endl;


}
 /**********************************************************************/
// My third c++ program
//Finding the hypothenuse 

/* #include<iostream>
#include<cmath>
using namespace std;
int main(void) {

	double a,b,h;

	//get perpendicular sides 
	cout << "please enter perpendicular sides: ";
	cin >> a >> b;

	//calculate hypothenuse 

	h = sqrt(pow(a, 2) + pow(b, 2));

	//display hypo
	cout << "the hypothenuse is:" << h << "\n"; //cout for message in double quotes or one variable or an expression

	return 0;

}*/

/**********************************************************************/

//Functions in C++
// CALL BY VALUE

/* 

#include<iostream>
#include<cmath>
using namespace std;

double calcHyp(double x, double y);

int main(void) {

	double a, b, h;

	//get perpendicular sides 
	cout << "please enter perpendicular sides: ";
	cin >> a >> b;

	//calculate hypothenuse 

	h = calcHyp(a,b);

	//display hypo
	cout << "the hypothenuse is:" << h << "\n"; //cout for message in double quotes or one variable or an expression

	return 0;

}

double calcHyp(double x, double y) {
	return sqrt(pow(x, 2) + pow(y, 2));
}


 */

 /**********************************************************************/


//Functions in C++
// CALL BY REFRENCE

/*   

#include<iostream>
#include<cmath>
using namespace std;

void calcHyp(double x, double y, double &hy); //shouldnt return anything why? 
                                              //because im sending an adreess of a variable &hy 
                                              //the result will be input to that variable 

int main(void) {

	double a, b, h;

	//get perpendicular sides 
	cout << "please enter perpendicular sides: ";
	cin >> a >> b;

	//calculate hypothenuse 

	calcHyp(a, b, h); //it will send h as an address 

	//display hypo
	cout << "the hypothenuse is:" << h << "\n"; //cout for message in double quotes or one variable or an expression

	return 0;

}

void calcHyp(double x, double y, double &hy) {

	hy = sqrt(pow(x, 2) + pow(y, 2));

}
 

 */

 /**********************************************************************/

//C++ PROGRAM to find the distance between 2 points by call by refrence 

/* 
#include<iostream>
#include<cmath>
using namespace std;

void calcDist(double a1, double b1, double a2, double b2, double &d);

int main(void) {

	double x1, y1, x2, y2, dist;

	//Get two points coordinates from user
	cout << "please enter the first point x and y: ";
	cin >> x1 >> y1;
	cout << "please enter the second point x and y: ";
	cin >> x2 >> y2;


	//Calculate distance 

	calcDist(x1, y1, x2, y2, dist);

	//Display results 

	cout << "the distance is : " << dist << endl;

	return 0;
}
void calcDist(double a1, double b1, double a2, double b2, double &d) {

	d = sqrt(pow((a2 - a1), 2) + pow((b2 - b1), 2));

}
*/

/**********************************************************************/

//Functions with - Default Values

/* 
#include<iostream>
#include<cmath>

//2 important points 
// *the default value are only indicated in the func prototype
// * default values are given from the end bec if i miss smth it will take the default value of last one


using namespace std;

void calcDist(double& d, double a1, double b1, double a2 = 0, double b2 = 0);  //func prototype

int main(void) {

	double x1, y1, x2, y2, dist;



	//Calculate distance 
	calcDist(dist,2,2,4,5);
	cout << "the distance is : " << dist << endl;

	calcDist(dist, 2, 2, 4); //we have default value for b2
	cout << "the distance is : " << dist << endl;

	calcDist(dist, 2, 2); //we have default value for a2 and b2
	cout << "the distance is : " << dist << endl;

	return 0;
}
void calcDist(double &d, double a1, double b1, double a2 , double b2) //func defnintion
{

	d = sqrt(pow((a2 - a1), 2) + pow((b2 - b1), 2));

}
*/

/**********************************************************************/

//C++ program to find absolute value
//function overloading 

/* 
#include<iostream>
#include<cmath>
using namespace std;

void absVal(int a, int &b);
void absVal(double a, double &b);

int main(void) {

	int x , y;

	double a, b;

	x = -4;
	absVal(x, y);

	cout << "Absolute value of " << x <<" is " << y << endl;

	a = -4.5;
	absVal(a, b);

	cout << "Absolute value of " << a << " is " << b << endl;

	return 0 ;
}
void absVal(int a, int& b) {

	if (a < 0) b = a * -1;
	else       b = a;


}
void absVal(double a, double& b) {

	if (a < 0) b = a * -1;
	else       b = a;

}
*/

/**********************************************************************/

//C++ program that calculates area of rectangle 
//call by value + func overloading

/* 
#include<iostream>
using namespace std;

int calcArea(int a); //calc area of a square 
int calcArea(int a, int b); //calc area of  a recatngle

int main(void) {
	int area;

	area = calcArea(5);
	cout << "Area is " << area << endl;

	area = calcArea(5, 10);
	cout << "Area is " << area << endl;
	

	return 0;
}

int calcArea(int a) {

	return a * a;

}
int calcArea(int a, int b) {

	return a * b;
}
*/



/***********************************END*************************************/


