#include <iostream>
using namespace std;

// void printArray(int a[], int n) {
void printArray(int *arr, int n) { // We can use int*arr instead of int a[] because
	// neeche se user ne pass toh 0th index ka address kia
	// Aur usse hum int* ya pointer mei bhi store kr skte
	for (int i = 0; i < n; ++i)
	{
		cout << *(arr + i) << ' ';
	}

	cout << endl;
}

int main() {

	int a[] = {1, 2, 3};
	int n = sizeof(a) / sizeof(int);

	printArray(a, n); // a: it is actually address of 0th index bucket

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << *(a + i) << ' '; // *(a+i) == a[i]
	// }

	// cout << endl;

	// cout << sizeof(a) << endl;

	// cout << "a         : " << a << endl;
	// cout << "&a[0]     : " << &a[0] << endl;

	// cout << "a+1       : " << a + 1 << endl;
	// cout << "&a[1]     : " << &a[1] << endl;

	return 0;
}
















