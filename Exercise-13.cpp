#include <iostream>
using namespace std;

int main() {
	
	int number1, number2, number3, max{}, min{};
	cout << "Enter 3 numbers : \n";
	cin >> number1 >> number2 >> number3;
	
	if (number1 > number2 && number1 > number3) {
		max = number1;
	}
	else if (number2 > number1 && number2 > number3) {
		max = number2;
	}
	else {
		max = number3;
	}

	if (number1 < number2 && number1 < number3) {
		min = number1;
	}
	else if (number2 < number1 && number2 < number3) {
		min = number2;
	}
	else {
		min = number3;
	}

	cout << "Max : " << max << endl;
	cout << "Min : " << min << endl;
}




