#include<iostream>
using namespace std;

class item {

private:

	int code[50];
	float price[50];
	int i = 0;

public:

	void setitem(void);
	void displayitem(void);
	void sumitem(void);
	void deleteitem(void);
	void exit(void);

};

int main(void)
{
	item t1;

	int choice;



	while(choice !=5){
		cout << " Options are :" << endl;
		cout << " 1.    add an item " << endl;
		cout << " 2.    Display total value " << endl;
		cout << " 3.    Delete an item " << endl;
		cout << " 4.    Display all items " << endl;
		cout << " 5.    Exit " << endl;


		cout << " enter your choice: " << endl;
		cin >> choice;


		switch (choice)
		{
		case 1:
			t1.setitem();
			break;
		case 2:
			t1.displayitem();
			break;
		case 3:
			t1.sumitem();
			break;
		case 4:
			t1.deleteitem();
			break;
		case 5:
			t1.exit();
		}
	


}



	void item::setitem(void)
	{

	cout << "enter item code: " << endl;
	cin >> code[i];
	cout << "enter item cost: " << endl;
	cin >> price[i];
	i++;
	cout << "Items added" << endl;

	

}

void item::displayitem(void)
{
	float tot = 0; int a;


	for (a = 0; a < i; a++) {

		tot = tot + price[a];

	}
	cout << " Total Value " << tot << endl;

}


void item::deleteitem(void)
{
	int codes, j;

	cout << "enter delete code" << endl;
	cin >> codedel;

	for (j = 0; j < i; j++)
	{
		if (code[j] == codes)
			break;
	}
	code[j] = 0;
}



void item::sumitem(void)
{
	int b = 0;

	cout << "code \t\t\ tprice" << endl;

	for (b = 0; b < i; b++)
	{
		cout << code[b] << price[b] << endl;
	}

}

void item::exit(void)
{

}