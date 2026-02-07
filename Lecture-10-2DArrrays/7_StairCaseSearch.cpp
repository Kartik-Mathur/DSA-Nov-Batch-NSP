#include <iostream>
using namespace std;



void search(int arr[][100], int n, int m, int key) {
	int i = 0, j = m - 1; // Top right corner

	while (i< n and j >= 0) {
		cout << "Comparing " << key << " with " << arr[i][j] << endl;
		if (arr[i][j] == key) {
			cout << key << " found at : " << i << ", " << j << endl;
			return;
		}
		else if (key > arr[i][j]) {
			i++;
		}
		else {
			j--;
		}
	}

	cout << "Key Not Found\n";
}

int main() {
	int n = 4, m = 4;
	// int a[100][100] = {
	int a[][100] = {// Mentioning rows is optional
		{1, 2, 3, 10},
		{4, 5, 12, 18},
		{6, 13, 15, 20},
		{9, 14, 22, 25},
	};

	print(a, n, m);
	int key;
	cin >> key;

	search(a, n, m, key);

	return 0;
}
















