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
		// cout << "Address : " << this << endl;
		cout << "Name    : " << name << endl;
		cout << "Price   : " << price << endl;
		cout << "Model   : " << model << endl;
	}
};

int main() {

	Car A;
	cout << "&A   : " << &A << endl;
	// To access data members we use dot operator
	strcpy(A.name, "Maruti");
	A.price = 100;
	A.model = 2020;

	// Print data of Car A
	A.print();

	// Creating another Car
	Car B;
	cout << "&B   : " << &B << endl;

	strcpy(B.name, "Tata");
	B.price = 200;
	B.model = 2024;

	B.print();






	return 0;
}
















