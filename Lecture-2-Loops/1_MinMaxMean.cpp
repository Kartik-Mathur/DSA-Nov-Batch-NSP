#include <iostream>
#include <climits> // INT_MIN(-2^31) and INT_MAX (2^31-1)
using namespace std;

int main() {
	int sum = 0;
	int mx = INT_MIN;
	int mi = INT_MAX;
	int number, i;
	// 1. Take n as input (Itne numbers user input dega)
	int n;
	cin >> n;

	i = 1; // Initialisation
	while (i <= n) { // Condition check

		cin >> number;
		// Find if this number is greater than mx
		if (number > mx) {
			mx = number;
		}

		// Find if this number is less than mi
		if (number < mi) {
			mi = number;
		}

		// We also need to find sum of all the numbers for mean calculation
		sum = sum + number;


		i = i + 1; // Updation
	}

	// Outside the loop
	cout << "Minimum : " << mi << endl; // endl == '\n'
	cout << "Maximum : " << mx << endl; // endl == '\n'
	cout << "Mean    : " << sum / (n * 1.0) << endl; // endl == '\n'

	return 0;
}
















