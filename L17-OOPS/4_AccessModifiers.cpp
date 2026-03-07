#include <iostream>
using namespace std;

class Car {
private:
	int price;
public:
	// Data members
	char *name;
	int model;


	// 1. Default constructor
	Car() {
		name = NULL; // Kabhi bhi pointer ke andar garbage nhi rehne dete hai
		cout << "Inside Default Constructor\n";
	}

	// 2. Parameterized Constructor
	Car(char *a, int p, int m) {
		cout << "Inside Parameterized Constructor\n";
		// Car create ho rahi hai name ke pass koi valid memory address nhi hai
		name = new char[strlen(a) + 1];
		strcpy(name, a);
		price = p;
		model = m;
	}

	// 3. Parameterized Constructor - 2
	Car(int p, int m, char *a) {
		cout << "Inside Parameterized Constructor - 2\n";
		// Car create ho rahi hai name ke pass koi valid memory address nhi hai
		name = new char[strlen(a) + 1];
		strcpy(name, a);
		price = p;
		model = m;
	}

	// 4. Copy Constructor
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		// Car create ho rahi hai name ke pass koi valid memory address nhi hai
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	// 5. Copy Assignment operator
	void operator=(Car X) {
		cout << "Inside Copy Assignment operator\n";
		// strcpy(name, X.name);
		updateName(X.name);
		price = X.price;
		model = X.model;
	}

	// 6. Destructor
	~Car() {
		cout << "Deleting Car " << name << endl;

		delete []name;
		name = NULL;
	}

	// Functions
	void print() {
		// cout << "Address : " << this << endl;
		cout << "Name    : " << name << endl;
		cout << "Price   : " << price << endl;
		cout << "Model   : " << model << endl;
	}

	void updateName(char *a) {
		if (name != NULL) {
			delete []name;
		}

		name = new char[strlen(a) + 1];
		strcpy(name, a);
	}

	// Setter for price
	void setPrice(int p) {
		if (p > 100 and p < 150) price = p;
		else price = 140;
	}

	// Getter for price
	int getPrice() {
		return price;
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
	char x[] = "Maruti";
	A.updateName(x);
	/*
	A.price = 100;
	cout << "Price : " << A.Price << endl;
	*/

	A.setPrice(100);
	A.model = 2020;
	cout << "Price : " << A.getPrice() << endl;
	// Print data of Car A
	A.print();

	// Creating another Car
	// Car B("Tata", 300, 2025); // This will call parameterized constructor
	char y[] = "Tata";
	Car B(300, 2025, y); // This will call parameterized constructor

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
















