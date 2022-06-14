#include<iostream>
#include<string>

using namespace std;

int main()
{
	string color, pluralnoun, celeb; /*declering variables*/

	cout << "enter a color: ";
	getline(cin, color); /*getting input*/
	cout << "enter a pluralnoun: ";
	getline(cin, pluralnoun);
	cout << "enter a celebrity: ";
	getline(cin, celeb);



	cout << "Roses are " << color << endl;
	cout << pluralnoun << " are blue " << endl;
	cout << "I love " << celeb << endl;

	return 0;

}