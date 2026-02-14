#include <iostream>
using namespace std;

bool check7(int*a, int n, int i) {
	// base case
	if (i == n) {
		return false;
	}

	// recursive case
	if (a[i] == 7) {
		return true;
	}

	bool ans = check7(a, n, i + 1);
	return ans;
}


bool check7_way2(int*a, int n, int i) {
	// base case
	if (i == n) {
		return false;
	}

	// recursive case
	if (a[i] == 7) {
		return true;
	}

	return check7_way2(a, n, i + 1);
}

int first7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}

	// recursive case
	if (a[i] == 7) {
		return i;
	}

	int ans = first7(a, n, i + 1);
	return ans;
}

int last7(int *a, int i) {
	// base case
	if (i == -1) {
		return -1;
	}

	// recursive case
	if (a[i] == 7) return i;

	return last7(a, i - 1);
}

void all7(int *a, int n, int i) {
	if (i == n) return;

	if (a[i] == 7) {
		cout << i << " ";
	}

	all7(a, n, i + 1);
}

int main() {

	int a[] = {1, 2, 7, 5, 6, 7, 8, 9, 7};
	int n = sizeof(a) / sizeof(int);

	cout << first7(a, n, 0) << endl;
	cout << last7(a, n - 1) << endl;

	all7(a, n, 0);

	// if (check7(a, n, 0) == true) {
	// 	cout << "7 is present\n";
	// }
	// else {
	// 	cout << "7 is not present\n";
	// }


	return 0;
}
















