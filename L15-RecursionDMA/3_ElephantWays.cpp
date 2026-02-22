#include <iostream>
using namespace std;

int ways(int n, int m) {
	if (n == 0 and m == 0) return 1;

	int ans = 0;
	for (int k = 0; k < n; ++k)
	{
		ans += ways(k, m);
	}

	for (int k = 0; k < m; ++k)
	{
		ans += ways(n, k);
	}

	return ans;
}

int main() {

	cout << ways(3, 3) << endl;

	return 0;
}
















