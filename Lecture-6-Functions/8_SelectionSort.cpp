#include <iostream>
using namespace std;

void print(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
}

void SelectionSort(int a[], int n) {
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
}

int main() {
	int a[100];
	int n;
	cin >> n; // Pehle yeh batao kitne number input honge

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	SelectionSort(a, n);

	cout << "Sorted Array: ";
	print(a, n);

	return 0;
}
















