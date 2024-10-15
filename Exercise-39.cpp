#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the initial size of the array: ";
    cin >> size;


    int* arr = new int[size];


    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }


    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int newSize = size * 2;
    int* newArr = new int[newSize];

    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }cout << "Enter the rest of the numbers" << endl;
    for (int i = size; i < newSize; i++) {
        cin >> newArr[i];
    }
    for (int i = 0; i < newSize;i++) {
        cout << newArr[i];
    }
}
