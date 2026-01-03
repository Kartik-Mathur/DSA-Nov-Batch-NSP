#include <iostream>
using namespace std;

int main() {

	int n, i, no;
	cin >> n;

	int r = 1;
	while (r <= n) {

		// 1. Print spaces n-r
		i = 1; // Initialisation
		while (i <= n - r) { // condition check
			cout << ' ';

			i = i + 1; // updation
		}

		// 2. Print inc numbers r times, no = r
		no = r;
		i = 1;
		while (i <= r) {

			cout << no;
			no = no + 1; // To ensure we print increasing numbers


			i = i + 1;
		}

		// 3. Print dec numbers r-1 times, no = 2 * r -2
		no = 2 * r - 2;
		i = 1;
		while (i <= r - 1) {

			cout << no;
			no = no - 1;

			i = i + 1;
		}


		cout << endl;
		r = r + 1;
	}

	return 0;
}
















