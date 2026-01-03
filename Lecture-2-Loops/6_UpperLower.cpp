#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	if (ch >= 'A' && ch <= 'Z') {
		// cout << "Upper Case Character Hai\n";
		// char n = ch + 32;
		// cout << n << endl;

		// Explicit
		cout << (char)(ch + 32) << endl;
	}
	else {
		// cout << "Lower Case Character Hai\n";
		// char n = ch - 32;
		// cout << n << endl;

		// Explicit: Manually Change krna datatype ko is Explicit Type Conversion
		cout << (char)(ch - 32) << endl;

	}

	return 0;
}
















