#include <iostream>
using namespace std;

// Modern Datatype
class Car {
public:
	// Data members
	char name[100];
	int model;
	int price;

	// Functions
	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price   : " << price << endl;
		cout << "Model   : " << model << endl;
	}
};

int main() {

	Car A;

	// To access data members we use dot operator
	strcpy(A.name, "Maruti");
	A.price = 100;
	A.model = 2020;

	// Print data of Car A
	cout << "Name   : " << A.name << endl;
	cout << "Price   : " << A.price << endl;
	cout << "Model   : " << A.model << endl << endl;

	// Creating another Car
	Car B;
	strcpy(B.name, "Tata");
	B.price = 200;
	B.model = 2024;

	cout << "Name   : " << B.name << endl;
	cout << "Price   : " << B.price << endl;
	cout << "Model   : " << B.model << endl;





	return 0;
}
















