#include <iostream>
#include <climits>
// INT_MAX:  2^31 - 1
// INT_MIN: -2^31
using namespace std;

int main() {
	int ans = INT_MIN;

	int n, number;
	cin >> n;

	int i = 1; // Initialisation
	while (i <= n) { // Condition Check

		cin >> number;

		if (number > ans) { // If user ne jo input kia vo bada hai toh maximum whi hoga
			ans = number; // Update kardo ans bucket ko
		}

		i = i + 1; // Updation
	}

	cout << ans << '\n';

	return 0;
}
















