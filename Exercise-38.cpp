#include <iostream>
using namespace std;

int main() {
	int count;
	cout << "how many values to store in the dynamic array";
	cin >> count;
	int* myDynamicArray;
	myDynamicArray = new int[3];

	for (int k = ; k < count; k++) {
		cout << "Input Value: ";
		cin >> myDynamicArray[k];
}
	for (int i = 0; i < count; i++) {
		cout << myDynamicArray[i] << endl;
	}
}	
delete[] myDynamicArray;

for (int i = 0; i < 5;i++) {
	cout << myDynamicArray[i] << endl;
}
