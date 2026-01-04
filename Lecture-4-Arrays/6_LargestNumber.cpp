#include <iostream>
#include <climits>
using namespace std;

int main() {

	int a[100];
	int n;
	cin >> n; // Pehle yeh batao kitne number input honge

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	// Algorithm to find the largest element
	int ans = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > ans) {
			ans = a[i];
		}
	}

	cout << ans << endl;

	return 0;
}
















