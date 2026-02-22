#include <iostream>
using namespace std;

int main() {

	/*
	Create an integer bucket using DMA
	*/
	int *a = new int;

	*a = 10;
	cout << *a << endl;

	delete a;
	a = NULL;

	/*
	Create an array using DMA
	*/

	int *arr;
	int n;
	cin >> n;

	arr = new int[n]; // Run Time memory allocation
	// Compile time is -> int a[1000];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	/*Free the memory of an array in DMA*/
	delete []arr;
	arr = NULL;

	return 0;
}
















