#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
	int employee_id;
	string name;
	string postion;
	int salary;
public:
	Employee(int a, string n,string x,int y) {
		employee_id = a;
		name = n;
		postion = x;
		salary = y;
	}
	Employee(int a,int n) {
		salary = a;
		employee_id = n;
	}
	Employee(string a, string n) {
		name = n;
		postion = a;
	}

	string setemployee_id(int X) {
		 employee_id = X;
	}
	string setname(int Y) {
		name = Y;
	}
	string setpostion(int Z) {
		name = Z;
	}
	int setsalary(int A) {
		salary = A;
	}
	int getemployee_id() {
		return employee_id;
	}
	string getname() {
		return name;
	}
	string getpostion() {
		return postion;
	}
	int getsalary() {
		return salary;
	}
	void print() {
		cout << "Employee id = " << employee_id << endl;
		cout << "Name: " << name << endl;
		cout << "Postion = " << postion << endl;
		cout << "salary = " << salary << endl;
	}
	
};

int main() {
	
	string name;
	cout << "Enter name: ";
	cin >> name;
	string position;
	cout << "Postion = ";
	cin >> position;
	Employee E1(123, name,position, 5000);
	int employee_id;
	cout << "Employee ID = ";
	cin >> employee_id;
	cout << "Employee salary = ";
	int salary;
	cin >> salary;
	
	E1.print();
}
