#include <iostream>
using namespace std;

int main() {

	int n;
	// Tell whether this n is prime or not
	cin >> n;

	int i = 2;
	while (i <= n - 1) {

		if (n % i == 0) {
			break;
		}

		i = i + 1;
	}

	if (i == n) {
		cout << n << " is prime\n";
	}
	else {
		cout << n << " is NOT prime\n";
	}


	return 0;
}