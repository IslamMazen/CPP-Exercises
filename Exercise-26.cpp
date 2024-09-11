#include <iostream>
#include <iostream>

using namespace std;
class Product {
	int product_id;
	string name;
	int quantity;
	string price;

public:
	Product(int a, string n, int d, string c) {
		product_id = a;
		name = n;
		quantity = d;
		price = c;
		
	}
	int setproduct_id(int X) {
		product_id = X;
	}
	string setname(int Y) {
		name = Y;
	}
	int setquantity(int Z) {
		quantity = Z;
	}
	string setprice(int A) {
		price = A;
	}
	int getproduct_id() {
		return product_id;
	}
	string getname() {
		return name;
	}
	int getquantity() {
		return quantity;
	}
	string getprice() {
		return price;
	}
	void print() {
		cout << "Product ID: " << product_id << endl;
		cout << "Product Name: " << name << endl;
		cout << "The Amount of this product: " << quantity << endl;
		cout << "Price: " << price << endl;
	}
};




int main() {
	Product P1(1234, "Milk", 10, "12 dollars");
	
	int product_id;
	cout << "Enter Product ID" << endl;
	cout << "  ";
	cin >> product_id;
	int name;
	cout << "What Is The Name Of The Product" << endl;
	cout << "  ";
	cin >> name;
	int quantity;
	cout << "What Is The Amount Of That Product" << endl;
	cout << "  ";
	cin >> quantity;
	int price;
	cout << "What Is The Price Of that product " << endl;
	cout << "  ";
	P1.print();

}
