#include <iostream>
using namespace std;

int main() {

	int a = 1;
	float f = 1.11;
	bool b = true;

	// Pointers
	int *ap = &a; // Initialisation -> Bucket bante time value dena
	/*
	int *ap;
	ap = &a; // Assignment -> Already bani hui bucket mei value dena
	*/
	float *fp = &f;
	bool *bp = &b;

	// POINTER SHOULD NEVER HAVE GARBAGE VALUE IN IT
	int *x = NULL;
	// cout << x << endl;
	// cout << *x << endl;


	cout << "&a            : " << &a << endl;
	cout << "ap            : " << ap << endl;
	cout << "sizeof(&a)    : " << sizeof(&a) << endl;
	cout << "sizeof(&ap)   : " << sizeof(ap) << endl;

	cout << "&f            : " << &f << endl;
	cout << "fp            : " << fp << endl;
	cout << "sizeof(&f)    : " << sizeof(&f) << endl;

	cout << "&b            : " << &b << endl;
	cout << "bp            : " << bp << endl;
	cout << "sizeof(&b)    : " << sizeof(&b) << endl;

	return 0;
}
















