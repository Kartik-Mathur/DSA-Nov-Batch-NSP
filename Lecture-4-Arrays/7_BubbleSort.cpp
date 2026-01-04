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

		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
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
















