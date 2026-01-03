#include <iostream>
using namespace std;

int main() {

	char ch;
	int cnt = 0;

	cin >> ch; // Initialisation
	while (ch != '$') { // Condition Check

		cnt++;
		cout << "You Entered: " << ch << endl;

		cin >> ch; // Updation
	}

	cout << "Total Characters: " << cnt << endl;

	return 0;
}
















