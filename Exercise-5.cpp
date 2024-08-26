#include <iostream>
using namespace std;

int main() {
	cout << "Please Enter Number :\n";
	int num, sum{};
	cin >> num;

	sum += num % 10;
	num /= 10;

	sum += num % 10;
	num /= 10;

	sum += num % 10;
	num /= 10;

	cout << "Sum of Digits = " << sum << endl;
}
