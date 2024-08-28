#include <iostream>
using namespace std;

int main() {
	int year;
	cout << "Enter year : \n";
	cin >> year;

	if (year % 400 == 0 || year % 4 == 0) 
		cout << "leap year\n";
	else 
		cout << "NOT leap year\n";
}
