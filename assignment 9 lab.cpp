//products chocolate /water /candy /cookie
//costs 2.5           3      5       20
//number  100         100      50     75  default 

 #include<iostream>

using namespace std;

class ChocolateMachine {
	
	float chocolate;
	float water, candy, cookie;
    int count;
    float price;
	
	public:
		void FirstLoad(float choco = 2.5, float wat=3, float can=5, float cook=20, int s = 100);
		void GiveChocolate();
		void GiveWater();
		void GiveCandy();
		void GiveCookie();
		void show();
		void giveProducts();
	};
	void ChocolateMachine:: FirstLoad(float choco ,float wat,float can ,float cook ,int s ) {
	
		chocolate = choco;
		water = wat;
		candy = can;
		cookie = cook;
		count = s;
	}
	void ChocolateMachine::GiveChocolate() {
		cout << "The cost for chocolate is :" << chocolate <<"$." << endl;
	}
	void ChocolateMachine:: GiveWater() {
		cout << "The cost for water is :" << water << "$." << endl;
	}
	void ChocolateMachine::GiveCandy() {
		cout << "The cost for candy is :" << candy << "$." << endl;
	}
	void ChocolateMachine::GiveCookie() {
		cout << "The cost for cookie is :" << cookie << "$." << endl;

	}
	
	void ChocolateMachine::show() {

		GiveChocolate();
		GiveWater(); 
	    GiveCandy(); 
		GiveCookie(); 

	}

	void ChocolateMachine::giveProducts()
	{
		int ch, q;
		double payment;
		
		double change;

		while (true)
		{

			cout << "Enter your Choice: ";
			cin >> ch;
			if (ch == 4)
			{
				break;
			}
			cout << "How many do you want? ";
			cin >> q;
			cout << "How much is your payment? ";
			cin >> payment;
			change = payment - price;
			if (change > 0)
			{
				cout << "Your change: ";
				if (change > 1.0)
					cout << change << "$" << endl;
				else cout << change * 100 << " cent" << endl;
			}
		}
	}
	int main() {

		ChocolateMachine ch;

		int choice;
		while (1)
		{
			cout << "\nChoose Your snack" << endl;
			cout << "1)   chocolate "<< endl;
			cout << "2)   Water" << endl;
			cout << "3)   Candy " << endl;
			cout << "4)   Cookie" << endl;


  
			ch.giveProducts();

			ch.FirstLoad();

			ch.show();
		


			return 0;

		}
	}