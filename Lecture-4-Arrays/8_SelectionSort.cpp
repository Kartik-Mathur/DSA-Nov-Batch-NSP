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


	// Selection Sort
	for (int i = 0; i < n - 1; ++i)
	{
		int mi = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] < a[mi]) {
				mi = j;
			}
		}

		swap(a[i], a[mi]);
	}

	cout << "Sorted Array: ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















