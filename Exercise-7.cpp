#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Enter number : \n";
	cin >> number;

	if (number > 0)
		cout << "positive\n";
	else if (number < 0)
		cout << "negative\n";
	else
		cout << "zero\n";
}
