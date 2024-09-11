#include <iostream>
#include <string>

using namespace std;
class Car {
	int car_id;
	string make;
	int model;
	int year;
	bool is_rented;
public:
	Car(int a,string b,int c,int d,bool e) {
		car_id = a;
		make = b;
		model = c;
		year = d;
		is_rented = e;
	}
	int setcar_id(int X) {
		car_id = X;
	}
	string setmake(int Y) {
		make = Y;
	}
	int setmodel(int Z) {
		model = Z;
	}
	int setyear(int A) {
		year = A;
	}
	bool setis_rented(int V) {
		is_rented = V;
	}
	int getcar_id() {
		return car_id;
	}
	string getmake() {
		return make;
	}
	int getmodel() {
		return model;
	}
	int getyear() {
		return year;
	}
	bool getis_rented(){
		return is_rented;
	}
	void print() {
		cout << "Car ID: " << car_id << endl;
		cout << "Make: " << make << endl;
		cout << "Model: " << model << endl;
		cout << "Year: " << year << endl;
		cout << "Car Is Rented  " << is_rented;
	}	
};


int main() {
	int car_id;
	cout << "Car ID: ";
	cin >> car_id;
	string make;
	cout << "Make: ";
	cin >> make;
	int model;
	cout << "Model: ";
	cin >> model;
	int year;
	cout << "Year: ";
	cin >> year;
	bool is_rented;
	cout << "Car Is Rented";
	cin >> is_rented;


	Car C1(1234, "Ferrari", 4, 2024, 1);
	C1.print();

     
}
