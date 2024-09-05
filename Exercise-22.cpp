#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	int acc_num;
	string acc_holder;
	int balance;
public:
	BankAccount() {
		acc_num = balance = 0;
	}
	BankAccount(int a) {
		balance = 0;
		acc_num = a;
	}
	BankAccount(int a, string n) {
		acc_num = a;
		acc_holder = n;
		balance = 0;
	}
	BankAccount(int a,string n,int b) {
		balance = b;
		acc_num = a;
		acc_holder = n;
	}
	void setaccnum(int X) {
		acc_num = X;
	}
	void setaccholder(int Y) {
		acc_holder = Y;
	}
	void setbalance(int Z) {
		balance = Z;
	}
	int getaccnum() {
		return acc_num;
	}

	string getaccholder() {
		return acc_holder;
	}

	int getbalance() {
		return balance;
	}

	void Print() {
		cout << "Account Number: " << acc_num << endl;
		cout << "Name: " << acc_holder << endl;
		cout << "Balance: " << balance << endl;
	};
	void Withdraw(int amount) {
		if (amount <= balance) {
			balance -= amount;
			this->Print();
		}
		else {
			cout << "Insuffiecient Funds" << endl;
		}
	}
	void Deposit(int amount) {
		balance += amount;
		this->Print();
	}
};


int main() {
	BankAccount b1(123, "Mariam");
	BankAccount b2(100, "Islam");
	BankAccount b3(1234, "Mazen", 20000);
	int balance;
	cout << " enter balance: ";
	cin >> balance;
	b3.setbalance(balance);
	b3.Print();
	int amount;
	cout << "enter amount to withdraw: ";
	cin >> amount;
	b3.Withdraw(amount);
	cout << "enter amount to be deposited: ";
	cin >> amount;
	b3.Deposit(amount);
}

