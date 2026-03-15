#include <iostream>
using namespace std;

class Car {
private:
	int price;
public:
	// Data members
	char *name;
	int model;
	static int cnt; // This is common for all, har object ke pass iski copy nhi hogi
	// static members belong to class and not objects
	const int tyres; // We can only intitialize this bucket, we cannot assign any value

	// 1. Default constructor
	Car(): tyres(4), name(NULL) {
		// name = NULL; // Kabhi bhi pointer ke andar garbage nhi rehne dete hai
		cout << "Inside Default Constructor\n";
		cnt++;
	}

	// 2. Parameterized Constructor
	Car(char *a, int p, int m): tyres(4) {
		cout << "Inside Parameterized Constructor\n";
		// Car create ho rahi hai name ke pass koi valid memory address nhi hai
		name = new char[strlen(a) + 1];
		strcpy(name, a);
		price = p;
		model = m;
		cnt++;
	}

	// 3. Parameterized Constructor - 2
	Car(int p, int m, char *a): tyres(4) {
		cout << "Inside Parameterized Constructor - 2\n";
		// Car create ho rahi hai name ke pass koi valid memory address nhi hai
		name = new char[strlen(a) + 1];
		strcpy(name, a);
		price = p;
		model = m;
		cnt++;
	}

	// 4. Copy Constructor
	Car(const Car &X): tyres(4) {
		cout << "Inside Copy Constructor\n";
		// Car create ho rahi hai name ke pass koi valid memory address nhi hai
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		cnt++;
	}

	// 5. Copy Assignment operator
	void operator=(const Car &X) {
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
		cnt--;
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


	// Operator Overloading
	// A += B;
	void operator+=(const Car &X) {
		price += X.price;
		model += X.model;
		// X.price = 10000;
		char *newName = new char[strlen(name) + strlen(X.name) + 1];
		strcpy(newName, name);
		strcat(newName, X.name);

		if (name != NULL) {
			delete []name;
		}

		name = newName;
	}

	friend ostream& operator<<(ostream &ob, Car &X);
	friend istream& operator>>(istream &is, Car &X);
};

// cout << A << endl; // Agar car ko aise print karna hai toh we can use this syntax
/*
	cout is an object of class ostream
	cin is an object of class istream
*/
// Function Declaration : ostream& operator<<(ostream &ob, Car &X)
ostream& operator<<(ostream &ob, Car &X) {
	cout << "Name    : " << X.name << endl;
	cout << "Price   : " << X.price << endl;
	cout << "Model   : " << X.model << endl;

	return ob;
}

// cin>>A;
istream& operator>>(istream &is, Car &X) {
	cout << "Enter Name of Car: ";
	char name[100];
	cin >> name;
	X.updateName(name);
	cout << "Enter price : ";
	cin >> X.price;
	cout << "Enter Model : ";
	cin >> X.model;

	return is;
}

// This is how we give values to static variable
int Car::cnt = 0; // Car ke scope mei jo cnt hai uski value 0 kardo

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
	// After making price private data member we use getter and setter functions
	A.setPrice(100);
	cout << "Price : " << A.getPrice() << endl;

	A.model = 2020;

	// Print data of Car A
	// A.print();

	// Creating another Car
	// Car B("Tata", 300, 2025); // This will call parameterized constructor
	char y[] = "Tata";
	Car B(300, 2025, y); // This will call parameterized constructor

	// B.print();
	B = A;

	// Copy Constructor aise call hota hai
	// Car C(B); or Car C = B;
	Car C = B;
	// C.print();

	Car D; // This will also call default constructor
	D = C; // This is calling Copy assignment operator

	// Operator Overloading: Kisi bhi operator ki working define kar skte hai
	D += C;

	cout << "Total Cars: " << Car::cnt << endl;
	cout << "Total Cars: " << A.cnt << endl;

	cout << A << endl;
	cout << B << endl;
	cout << C << endl;

	cin >> A;

	cout << A << endl;



	return 0;
}
















