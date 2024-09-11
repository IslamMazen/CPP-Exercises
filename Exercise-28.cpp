#include <iostream>
#include <string>

using namespace std;
class Book {
	string book_title;
	string author;
	int isbn;
	int copies_available;
public:
	Book(string a, string b, int c, int d) {
		book_title = a;
		author = b;
		isbn = c;
		copies_available = d;
	}
	string setbook_title(int X) {
		book_title = X;
	}
	string setauthor(int Y) {
		author = Y;
	}
	string setisbn(int Z) {
		isbn = Z;
	}int setcopies_available(int A) {
		copies_available = A;
	}
	string getbook_title() {
		return book_title;
	}
	string getauthor() {
		return author;
	}
	int getisbn() {
		return isbn;
	}
	int copies_avaliable() {
		return copies_available;
	}
	void print() {
		cout << "Book Title: " << book_title << endl;
		cout << "Author: " << author << endl;
		cout << "ISBN = " << isbn << endl;
		cout << "Copies Avaliable =  " << copies_available;
	}

};

int main() {
	string book_title;
	cout << "Book Title: " << endl;
	cin >> book_title;
	string author;
	cout << "Author Name: " << endl;
	cin >> author;
	int isbn;
	cout << "ISBN: " << endl;
	cin >> isbn;
	int copies_avaliable;
	cout << "Copies Avaliable";
	cin >> copies_avaliable;
	
	Book("Science", "Ahmed", 98539847539, 10);
	Book B1.print;

}
