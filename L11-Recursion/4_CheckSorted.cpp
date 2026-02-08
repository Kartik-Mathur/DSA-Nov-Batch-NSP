#include <iostream>
using namespace std;

bool checkSorted(int *a, int n) {
	if (n == 1) {
		return true;
	}

	bool chotaArraySorted = checkSorted(a + 1, n - 1);
	if (chotaArraySorted == true && a[0] <= a[1]) {
		return true;
	}

	return false;
}

bool checkSorted2(int *a, int n) {
	if (n == 1) {
		return true;
	}

	bool chotaArraySorted = checkSorted2(a, n - 1);
	if (chotaArraySorted == true && a[n - 1] >= a[n - 2]) {
		return true;
	}

	return false;
}

bool checkSorted3(int *a, int i, int n) {
	if (i == n - 1) {
		return true;
	}

	bool chotaArraySorted = checkSorted3(a, i + 1, n);
	if (chotaArraySorted == true && a[i] <= a[i + 1]) {
		return true;
	}

	return false;
}

int main() {

	int a[] = {1, 2, 3, 4, -5};
	int n = sizeof(a) / sizeof(int);

	if (checkSorted3(a, 0, n)) {
		cout << "Sorted\n";
	}
	else {
		cout << "Not Sorted\n";
	}

	return 0;
}
















