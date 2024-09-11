#include <iostream>

using namespace std;


class PaymentMethod {
public:
    virtual void pay() const {
        cout << "Processing payment using a generic payment method." << endl;
    }
};


class CreditCard : public PaymentMethod {
public:
    void pay() const override {
        cout << "Processing payment using a credit card." << endl;
    }
};


class PayPal : public PaymentMethod {
public:
    void pay() const override {
        cout << "Processing payment using PayPal." << endl;
    }
};


class Cash : public PaymentMethod {
public:
    void pay() const override {
        cout << "Processing payment using cash." << endl;
    }
};

int main() {
    CreditCard creditCard;
    PayPal payPal;
    Cash cash;

    creditCard.pay(); 
    payPal.pay();   
    cash.pay();      
    return 0;
}
