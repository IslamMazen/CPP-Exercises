#include <iostream>

using namespace std;


class Appliance {
public:
    virtual void turnOn() const {
        cout << "Turning on a generic appliance." << endl;
    }
    virtual ~Appliance() = default; 
};


class WashingMachine : public Appliance {
public:
    void turnOn() const override {
        cout << "Turning on the washing machine." << endl;
    }
};


class Refrigerator : public Appliance {
public:
    void turnOn() const override {
        cout << "Turning on the refrigerator." << endl;
    }
};


class Microwave : public Appliance {
public:
    void turnOn() const override {
        cout << "Turning on the microwave." << endl;
    }
};

int main() {
    WashingMachine washingMachine;
    Refrigerator refrigerator;
    Microwave microwave;

    washingMachine.turnOn(); 
    refrigerator.turnOn();   
    microwave.turnOn();      

    return 0;
}
