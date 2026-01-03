#include <iostream>
using namespace std;

int main() {

	char ch;
	int cnt = 0;

	ch = cin.get(); // Initialisation
	while (ch != '$') { // Condition Check

		cnt++;
		cout << "You Entered: " << ch << endl;

		ch = cin.get(); // Updation
	}

	cout << "Total Characters: " << cnt << endl;

	return 0;
}
















