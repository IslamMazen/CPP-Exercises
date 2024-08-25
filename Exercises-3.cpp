#include <iostream>
using namespace std;

int main() {
	cout << "Please Enter 3 numbers : \n";
	int num1,num2,num3;
	float avg;
	cin >> num1>>num2>>num3;
	avg = (float)(num1 + num2 + num3)/3;
	cout << "Avg =  " << avg << endl;
}
