#include <iostream>
using namespace std;

bool checkPrime(int n) {
	for (int i = 2; i <= n - 1; ++i)
	{
		if (n % i == 0) {
			return false; // iske baad vapis chale jaenge aur baaki checkPrime ka code nhi chlega
		}
	}

	// loop ke bahar aane ka mtlb n -> i se divide nhi ho paaya thus return true
	return true; // this means number is prime
}

int main() {

	int n;
	cin >> n;

	bool ans = checkPrime(n);
	if (ans == true) {
		cout << "Prime\n";
	}
	else {
		cout << "Not Prime\n";
	}

	if (checkPrime(10)) {
		cout << "Prime\n";
	}
	else {
		cout << "Not Prime\n";
	}

	return 0;
}
















