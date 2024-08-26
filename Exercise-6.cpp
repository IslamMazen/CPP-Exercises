#include <iostream>
using namespace std;

int main() {
	cout << "Please Enter Number :\n";
	int seconds;
	cin >> seconds;
	
	int hours = seconds / (3600);
	int mins = (seconds % (3600)) / 60;
	int sec = seconds - hours * 3600 - mins * 60;

	cout << hours << ":" << mins << ":" << sec << endl;

}
