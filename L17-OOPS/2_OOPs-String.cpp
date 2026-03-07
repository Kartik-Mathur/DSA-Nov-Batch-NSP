#include <iostream>
using namespace std;


class Car {
public:
	// Data members
	string name;
	int model;
	int price;

	// 1. Default constructor
	Car() {
		name = "";
		cout << "Inside Default Constructor\n";
	}

	// 2. Parameterized Constructor
	Car(string a, int p, int m) {
		cout << "Inside Parameterized Constructor\n";
		// Car create ho rahi hai name ke pass koi valid memory address nhi hai
		name = a;
		price = p;
		model = m;
	}

	// 3. Parameterized Constructor - 2
	Car(int p, int m, string a) {
		cout << "Inside Parameterized Constructor - 2\n";
		// Car create ho rahi hai name ke pass koi valid memory address nhi hai
		name = a;
		price = p;
		model = m;
	}

	// 4. Copy Constructor
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		// Car create ho rahi hai name ke pass koi valid memory address nhi hai
		name = X.name;
		price = X.price;
		model = X.model;
	}

	// 5. Copy Assignment operator
	void operator=(Car X) {
		cout << "Inside Copy Assignment operator\n";
		// strcpy(name, X.name);
		name = X.name;
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
	/*
	// Not the right way of doing things....

	A.name = new char[strlen("Maruti") + 1];
	strcpy(A.name, "Maruti");

	*/
	A.name = "Maruti";
	A.price = 100;
	A.model = 2020;

	// Print data of Car A
	A.print();

	// Creating another Car
	// Car B("Tata", 300, 2025); // This will call parameterized constructor
	Car B(300, 2025, "Tata"); // This will call parameterized constructor

	B.print();
	B = A;

	// Copy Constructor aise call hota hai
	// Car C(B); or Car C = B;
	Car C = B;
	C.print();

	Car D; // This will also call default constructor
	D = C; // This is calling Copy assignment operator





	return 0;
}
















