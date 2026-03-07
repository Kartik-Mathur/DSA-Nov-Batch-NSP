#include <iostream>
using namespace std;


class Car {
public:
	// Data members
	char name[100];
	int model;
	int price;

	// 1. Default constructor
	Car() {
		cout << "Inside Default Constructor\n";
	}

	// 2. Parameterized Constructor
	Car(char *a, int p, int m) {
		cout << "Inside Parameterized Constructor\n";
		strcpy(name, a);
		price = p;
		model = m;
	}

	// 3. Parameterized Constructor - 2
	Car(int p, int m, char *a) {
		cout << "Inside Parameterized Constructor - 2\n";
		strcpy(name, a);
		price = p;
		model = m;
	}

	// 4. Copy Constructor
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	// 5. Copy Assignment operator
	void operator=(Car X) {
		cout << "Inside Copy Assignment operator\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	// 6. Destructor
	~Car() {
		cout << "Deleting Car " << name << endl;
	}

	// Functions
	void print() {
		// cout << "Address : " << this << endl;
		cout << "Name    : " << name << endl;
		cout << "Price   : " << price << endl;
		cout << "Model   : " << model << endl;
	}
};

int main() {

	Car A; // This will call default constructor
	// To access data members we use dot operator
	strcpy(A.name, "Maruti");
	A.price = 100;
	A.model = 2020;

	// Print data of Car A
	A.print();

	// Creating another Car
	// Car B("Tata", 300, 2025); // This will call parameterized constructor
	Car B(300, 2025, "Tata"); // This will call parameterized constructor

	// strcpy(B.name, "Tata");
	// B.price = 200;
	// B.model = 2024;

	B.print();

	// Copy Constructor aise call hota hai
	// Car C(B); or Car C = B;
	Car C = B;
	C.print();

	Car D; // This will also call default constructor
	D = C; // This is calling Copy assignment operator





	return 0;
}
















