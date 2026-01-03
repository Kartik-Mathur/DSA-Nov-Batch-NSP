#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;
	int no = 1;
	// 1. Row ka loop lagaya
	int r = 1;
	while (r <= n) {

		// 2. Print r times number
		i = 1; // Updation
		while (i <= r) { // Condition

			cout << no << " ";
			no++;

			i = i + 1; // Updation
		}

		cout << '\n';
		r = r + 1;
	}

	return 0;
}
















