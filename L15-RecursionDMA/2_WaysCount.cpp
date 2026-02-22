#include <iostream>
using namespace std;

int ways(int n, int m) {
	if (n == 0 or m == 0) return 1;

	return ways(n - 1, m) + ways(n, m - 1);
}


int main() {

	int n, m;
	cin >> n >> m;

	cout << ways(n, m) << endl;

	return 0;
}
















