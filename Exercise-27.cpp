#include <iostream>
#include <string>

using namespace std;
class Order {
	int order_id;
	string customer_name;
	string order_items;
	int total_amount;
public:
	Order(int a,string b,string c,int d) {
		order_id = a;
		customer_name = b;
		order_items = c;
		total_amount = d;
	}
	int setorder_id(int X) {
		order_id = X;
	}
	string setcustomer_name(int Y) {
		customer_name = Y;
	}
	string setorder_items(int Z) {
		order_items = Z;
	}
	int settotal_amount(int A) {
		total_amount = A;
	}
	int getorder_id() {
		return order_id;
	}
	string getcustomer_name() {
		return customer_name;
	}
	string getorder_items() {
		return order_items;
	}
	int gettotal_amount() {
		return total_amount;
	}
	void print() {
		cout << "What Is The Order Id: " <<  order_id << endl;
		cout << "What Is Your Name: " << customer_name << endl;
		cout << "What Is The Items: " << order_items << endl;
		cout << "What Is The Total Amount: " << total_amount << endl;
	}
};
int main() {
	int order_id;
	cout << "Enter Order ID: " << endl;
	cin >> order_id;
	int Name;
	cout << "What Is Your Name: " << endl;
	cin >> Name;
	int order_items;
	cout << "What Did You Buy: " << endl;
	cin >> order_items;
	int total_amount;
	cout << "What Is The Total Amount: " << endl;
	cin >> total_amount;




	Order O1(23124, "Ahmed", "cookie", 30000);
	O1.print();
}
