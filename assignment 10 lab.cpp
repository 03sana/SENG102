


//#include<iostream>
//
//using namespace std;
//
//class A {
//
//private:
//	int num;
//
//
//public:
//	A(int x = 10);
//	void getNum(int x);
//	friend void printN(A num);
//	
//};
//
//int main() {
//
//	A obj1;
//	
//	 printN(obj1);
//}
//A::A(int x) {
//
//	num = x;
//}
//
//void printN(A obj1) {
//
//	cout << obj1.num;
//}


//#include<iostream>
//
//using namespace std;
//
//class Employee {
//
//public:
//
//	int empId;
//	int depId;
//
//	string empName;
//
//	void getDetails(void);
//
//};
//
//class Department : public Employee {
//
//public:
//
//	void getDepartment(void);
//};
//
//void Employee::getDetails(void) {
//
//	cout << "enter your name:";
//	cin >> empName;
//
//	cout << "emter your id";
//	cin >> empId;
//
//	cout << "enter department id";
//	cin >> deptId;
//
//}
//
//void Department::getDepartment(void) {
//
//	switch (deptId) {
//
//	case 100: deptId = "IT";
//
//	case 200: deptId = "Proffessor";
//
//	case 300: deptId = "Manager";
//	}
//
//}
//
//int main() {
//
//	Department obj1;
//
//	obj1.getDetails();
//	obj1.getDepartment();
//
//	cout << "your department name is:"<<deptId << endl;
//}