#include <iostream>
using namespace std;

int main() {

	int a = 123;

	// You can also only print if needed instead of assigning the value
	a > 1 ? cout << "Hello\n" : cout << "World\n";

	// You can assign value using tertiary operator
	bool isEven;
	isEven =  ( (a % 2 == 0) ? true : false );

	cout << isEven << endl;

	return 0;
}
















