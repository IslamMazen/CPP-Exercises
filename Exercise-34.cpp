#include <iostream>
using namespace std;


class Account {
public:
    virtual double calculateInterest() const {
        return 0.0; 
    }
};


class SavingsAccount : public Account {
private:
    double balance;
    double interestRate;
public:
    SavingsAccount(double bal, double rate) : balance(bal), interestRate(rate) {}

    double calculateInterest() const override {
        return balance * interestRate / 100;
    }
};


class CheckingAccount : public Account {
private:
    double balance;
    double interestRate;
public:
    CheckingAccount(double bal, double rate) : balance(bal), interestRate(rate) {}

    double calculateInterest() const override {
        return balance * interestRate / 100;
    }
};


class FixedDepositAccount : public Account {
private:
    double principal;
    double annualRate;
    int years;
public:
    FixedDepositAccount(double principal, double rate, int yrs)
        : principal(principal), annualRate(rate), years(yrs) {}

    double calculateInterest() const override {
        return principal * annualRate / 100 * years;
    }
};

int main() {
    SavingsAccount savings(1000.0, 3.0); 
    CheckingAccount checking(2000.0, 0.5); 
    FixedDepositAccount fixedDeposit(5000.0, 5.0, 2); 

    cout << "Savings Account Interest: $" << savings.calculateInterest() << endl; 
    cout << "Checking Account Interest: $" << checking.calculateInterest() << endl; 
    cout << "Fixed Deposit Account Interest: $" << fixedDeposit.calculateInterest() << endl; 

    return 0;
}
