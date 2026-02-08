#include <iostream>
using namespace std;
/*
int sum(int n) {
	// base case
	if (n == 1) {
		return 1;
	}

	// recursive case: sum(n) = sum(n-1) + n
	int chotiProblem = sum(n - 1); // 100% assumption hai ki khud aa jaega answer
	int badiProblem = chotiProblem + n;

	return badiProblem;
}
*/

int sum(int n) {
	// base case
	if (n == 1) {
		return 1;
	}

	// recursive case: sum(n) = sum(n-1) + n
	return sum(n - 1) + n;
}

int main() {

	cout << sum(7) << endl;

	return 0;
}
















