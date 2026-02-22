#include <iostream>
using namespace std;

void solve0(char*a, int n) {
	for (int X = 0; X <= (1 << n) - 1; ++X)
	{
		for (int i = 0; i < n; ++i)
		{
			if ((X & (1 << i)) > 0) {
				cout << a[i];
			}
		}
		cout << endl;
	}
}

void solve(char*a, int X, int n) {
	// base case
	if (X == (1 << n)) return;

	// Recursive case
	for (int i = 0; i < n; ++i)
	{
		if ((X & (1 << i)) > 0) {
			cout << a[i];
		}
	}
	cout << endl;

	solve(a, X + 1, n);
}


void solve1(char*a, int i, int X, int n) {
	// base case
	if (X == (1 << n)) return;

	// Recursive case
	if (i < n) {
		if ((X & (1 << i)) > 0) {
			cout << a[i];
		}
		solve1(a, i + 1, X, n);
	}
	else {
		cout << endl;
		solve1(a, 0, X + 1, n);
	}
}


int main() {

	char a[] = "abc";
	int n = strlen(a);
	solve0(a, n);
	// solve(a, 0, n);
	// solve1(a, 0, 0, n);
	return 0;
}
















