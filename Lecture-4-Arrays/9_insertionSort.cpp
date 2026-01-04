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


	// Insertion Sort
	/*
	int i, j, temp;
	for (i = 1; i < n; ++i)
	{
		temp = a[i];
		for (j = i - 1; j >= 0; --j)
		{
			if (a[j] > temp) {
				a[j + 1] = a[j];
			}
			else {
				break;
			}
		}

		a[j + 1] = temp;
	}
	*/
	int i, j, temp;
	for (i = 1; i < n; ++i)
	{
		temp = a[i];
		for (j = i - 1; j >= 0 && a[j] > temp; --j)
		{
			a[j + 1] = a[j];
		}

		a[j + 1] = temp;
	}

	cout << "Sorted Array: ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















