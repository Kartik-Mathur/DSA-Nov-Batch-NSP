#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {
	int s = 0, e = n - 1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (a[mid] == key) {
			return mid; // return kardo index jaha par key present hai
		}
		else if (key > a[mid]) {
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}

	// Loop ke bahar aane ka mtlb key not found
	return -1; // -1 return krdo as it is not a valid index
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << binarySearch(a, n, 0) << endl;

	return 0;
}
















