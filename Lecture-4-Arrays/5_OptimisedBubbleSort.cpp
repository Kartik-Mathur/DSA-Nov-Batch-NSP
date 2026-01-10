#include <iostream>
using namespace std;

int main() {
	int a[100];
	int n;
	cin >> n; // Pehle yeh batao kitne number input honge

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	// Bubble Sort Algorithm
	for (int i = 0; i < n - 1; ++i)
	{	// Yeh loop chalega n-1 times

		int cnt = 0; // cnt zero hai

		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (a[j] > a[j + 1]) { // yaha swapping hogi
				cnt ++; // swapping hone par cnt increase krega
				swap(a[j], a[j + 1]);
			}
		}

		// If cnt is zero, means swapping nhi hui, else cnt increased hota means more than zero
		if (cnt == 0) { // iska mtlb hai array is sorted thus loop se bahar jaao and algo rok do
			break; // i wale loop se exit kar jaao no need to continue as array is sorted.
		}
	}

	cout << "Sorted Array: ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















