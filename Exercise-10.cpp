#include <iostream>
using namespace std;

int main() {
	int birthYear;
	cout << "Enter Birth year : \n";
	cin >> birthYear;
	if (birthYear > 18) 
		cout << "above 18\n";
	else 
		cout << "NOT above 18\n";
}
