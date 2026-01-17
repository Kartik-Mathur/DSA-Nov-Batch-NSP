#include <iostream>
using namespace std;

int arraySum(int *a, int n) {
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += a[i];
	}

	return ans;
}

// iska return type is int* means it can return address of int bucket
int* incorrectReturn() {
	int x = 10;

	return &x;// Galat hai yeh because x bucket destroy ho jaegi function ke hatne pr
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << arraySum(a + 2, n) << endl;

	// if (a[0] > 0) {
	// 	int t = 10;
	// }

	// cout << t << endl; // Undeclared identifier t

	return 0;
}
















