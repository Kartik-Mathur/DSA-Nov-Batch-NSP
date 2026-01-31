#include <iostream>
using namespace std;

void inputChar(char *a, int s, char delimiter = '\n') {
	char ch;
	ch = cin.get();
	int i = 0; // Index lelo ek
	while (i < s - 1 and ch != delimiter) {
		// Ek ek krke characters ko store krdo array ke andar
		a[i] = ch;
		i++;

		ch = cin.get();
	}

	a[i] = '\0';
}

int main() {

	char a[100];
	inputChar(a, 100, '$');

	cout << a << endl;

	// char ch;

	// // cin >> ch; // This will ignore whitespace character
	// ch = cin.get(); // This will take input of whitespace character

	// if (ch == '\n' or ch == '\t' or ch == ' ') {
	// 	cout << "You entered whitespace\n";
	// }
	// else {
	// 	cout << "Not a whitespace\n";
	// }



	return 0;
}
















