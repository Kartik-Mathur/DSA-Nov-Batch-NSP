#include <iostream>
using namespace std;

int factorial(int n) {
	int ans = 1;// ans ko 1 se initialise karo

	for (int i = 1; i <= n; ++i)
	{
		ans = ans * i; // multiple all the values of i from [1,n] in the ans bucket
	}

	// return the ans
	return ans;
}

int ncr(int n, int r) {
	int ans = factorial(n) / (factorial(r) * factorial(n - r));

	return ans;
}


int main() {

	cout << ncr(5, 2) << endl;

	return 0;
}
















