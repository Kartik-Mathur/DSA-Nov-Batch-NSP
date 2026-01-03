#include <iostream>
using namespace std;

int main() {

	int n;
	// Print karo n tak saare primes
	cin >> n;

	// N har number par jaega [2,n]
	int N = 2;
	while (N <= n) {

		// N agar prime hai toh print kro
		int i = 2;
		while (i <= N - 1) {

			if (N % i == 0) {
				break;
			}

			i = i + 1;
		}

		if (i == N) {
			cout << N << " ";
		}


		N = N + 1;
	}

	return 0;
}
















