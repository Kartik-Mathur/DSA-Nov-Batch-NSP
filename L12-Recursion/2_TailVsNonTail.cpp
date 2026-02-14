#include <iostream>
using namespace std;

// int fact(int n) {
// 	if (n == 0) return 1;

// 	return n * fact(n - 1); // Non - Tail Recursion Call
// }

void fact(int n, int &ans) { // ans-> pass by reference
	if (n == 0) return;

	ans = n * ans;

	fact(n - 1, ans);
}

int main() {
	int ans = 1;
	fact(5, ans);

	cout << ans << endl;
	return 0;
}
















