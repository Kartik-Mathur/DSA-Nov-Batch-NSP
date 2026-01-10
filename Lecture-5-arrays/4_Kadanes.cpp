#include <iostream>
using namespace std;

int main() {

	// int a[] = {1, -2, -3, 10, 2, -14, 5, 10};
	int a[] = { -1, -2, -3, -10, -2, -14, -5, -10};
	int n = sizeof(a) / sizeof(int);

	int ans = INT_MIN;
	int sum = 0;

	bool isPositivePresent = false;
	// Check karlo kahi saare elements negative toh nhi h
	for (int i = 0; i < n; ++i)
	{
		if (a[i] >= 0) {
			isPositivePresent = true;
			break;
		}
	}


	if (isPositivePresent == true)
	{
		// Kadanes will work
		for (int i = 0; i < n; ++i)
		{
			sum += a[i];

			if (sum < 0) {
				sum = 0;
			}

			ans = max(ans, sum);
		}

		cout << "MAX sum: " << ans << endl;
	}
	else {
		for (int i = 0; i < n; ++i)
		{
			ans = max(ans, a[i]);
		}
		cout << "MAX sum: " << ans << endl;
	}



	return 0;
}
















