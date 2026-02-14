#include <iostream>
using namespace std;

void printIncreasing(int i, int n) {
	// base case
	if (i == n + 1) {
		return;
	}

	// recursive case
	cout << i << " ";
	printIncreasing(i + 1, n);
}

int main() {

	printIncreasing(1, 10);

	cout << endl;


	return 0;
}
















