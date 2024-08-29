#include <iostream>
using namespace std;

int main() {
	char c;
	cout << "Enter character : ";
	cin >> c;
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' 
		|| c == 'o' || c == 'O' || c == 'i' 
		|| c == 'I' || c == 'u' || c == 'U') {
		cout << "Vowel\n";
	}
	else {
		cout << "Constant\n";
	}
}
