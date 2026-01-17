#include <iostream>
using namespace std;

int main() {

	int a = 1;
	float f = 1.11;
	bool b = true;

	cout << "&a            : " << &a << endl;
	cout << "sizeof(&a)    : " << sizeof(&a) << endl;

	cout << "&f            : " << &f << endl;
	cout << "sizeof(&f)    : " << sizeof(&f) << endl;

	cout << "&b            : " << &b << endl;
	cout << "sizeof(&b)    : " << sizeof(&b) << endl;

	return 0;
}
















