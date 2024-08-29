#include <iostream>
using namespace std;

int main() {
	int grade;
	cout << "Enter grade : ";
	cin >> grade;
	if (grade > 80) 
		cout << "A";
	else if (grade <= 80 && grade >= 60) 
		cout << "B";
	else if (grade < 60 && grade >= 50) 
		cout << "C";
	else if (grade < 50 && grade >= 45) 
		cout << "D";
	else if (grade < 45 && grade >= 25) 
		cout << "E";
	else 
		cout << "F";
}
