#include <iostream>
#include <string>
using namespace std;
int main() {
	int max = 0, second_max = 0, arr[5] = {};
	for (int i = 0; i < 5;i++){
		cin >> arr[i];
		if (max > arr[i]) {
			second_max = max;
			max = arr[i];
	}
		else if (second_max > arr[i]) {
			second_max = arr[i];
		}
	}

}
