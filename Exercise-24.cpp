#include <iostream>
#include <string>

using namespace std;
class Member {
private:
	int member_id;
	string name;
	string membership_type;
	bool membership_status;

public:
	Member(int a, string b, string c, bool d) {
		member_id = a;
		name = b;
		membership_type = c;
		membership_status = d;
	}
	int setmemeber_id(int X) {
		member_id = X;
	}
	string setname(int Y) {
		name = Y;
	}
	string setmembership_type(int Z) {
		membership_type = Z;
	}
	bool setmembership_status(int A) {
		membership_status = A;
	}
	int getmember_id() {
		return member_id;
	}
	string getname() {
		return name;
	}
	void print() {
		cout << "Member ID = " << member_id << endl;
		cout << "Name: " << name << endl;
		cout << "Membership Type: " << membership_type << endl;
		cout << "Membership status: " << membership_status << endl;
	}
};



int main() {
	string name;
	cout << "What is your name: " << endl;
	cout << "  ";
	cin >> name;
	int member_id;
	cout << "What is your ID: " << endl;
	cout << "  ";
	cin >> member_id;
	string membership_type;
	cout << "Yearly Or Monthly" << endl;
	cout << "  ";
	cin >> membership_type;
	bool membership_status;
	cout << "Active(1) Or Not Active(2)" << endl;
	cout << "  ";
	cin >> membership_status;

	Member M1(1234, "Ahmed", "yearly", true);
	M1.print();
	
}
