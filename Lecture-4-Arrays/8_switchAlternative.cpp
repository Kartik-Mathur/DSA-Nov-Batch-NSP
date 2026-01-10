#include <iostream>
using namespace std;

int main() {

	char ch = 'w';
	if (ch == 'N' or ch == 'n') {
		cout << "North\n";
	}
	else if (ch == 'E' or ch == 'e') {
		cout << "East\n";
	}
	else if (ch == 'W' or ch == 'w') {
		cout << "West\n"
		     ;
	}
	else if (ch == 'S' or ch == 's') {
		cout << "South\n";
	}
	else {
		cout << "Not a valid character\n";
	}

	return 0;
}
















