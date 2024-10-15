#include <iostream>
using namespace std;

int main() {
	int size, element;
	cout << "Enter the size of the array: ";
	cin >> size >> element;

	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
		if (arr[i] == element) {
			arr[i] = 0;
		}
	}
		
	for (int i = 0; i < size;i++) {
		cout << arr[i];
	}
}
