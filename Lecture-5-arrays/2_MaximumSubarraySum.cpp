#include <iostream>
#include <climits> // INT_MIN : -2^31
using namespace std;

int main() {

	int a[] = {1, -2, -3, 4, 5}; // Initialisation
	int n = sizeof(a) / sizeof(int); // number of buckets
	int ans = INT_MIN;
	int ansi, ansj;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			// Before printing the subarray lets create a bucket to find the sum
			int sum = 0;

			for (int k = i; k <= j; ++k)
			{
				sum += a[k]; // add all the buckets into sum
			}

			if (sum > ans) {
				ansi = i;
				ansj = j;
				ans = sum;
			}
		}
	}

	// After we are done with the algorithm
	cout << "Max Sum : " << ans << endl;
	for (int i = ansi; i <= ansj; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















