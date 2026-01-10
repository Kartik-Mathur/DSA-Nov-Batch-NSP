#include <iostream>
#include <climits> // INT_MIN : -2^31
using namespace std;

int main() {

	int a[] = {10, -2, -3, 4, 5}; // Initialisation
	int n = sizeof(a) / sizeof(int); // number of buckets
	int ans = INT_MIN;
	int ansi, ansj;
	int prefixSum[10000] = {}; // All the buckets will have value 0 in this....
	int x = 0;

	// Calculate the prefix sum
	for (int i = 0; i < n; ++i)
	{
		x += a[i];
		prefixSum[i] = x;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			// Before printing the subarray lets create a bucket to find the sum
			int sum;

			if (i - 1 >= 0) {
				sum = prefixSum[j] - prefixSum[i - 1]; // i-1 valid index hai toh subtrack kardo
			}
			else {
				sum = prefixSum[j] - 0; // i-1 index nhi exist krta toh vo nhi le skte
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
















