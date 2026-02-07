#include <iostream>
using namespace std;

void print(int arr[][100], int n, int m) {

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}


void search(int arr[][100], int n, int m, int key) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (arr[i][j] == key) {
				cout << key << " found at : " << i << ", " << j << endl;
				return; // Function se vapis chala jaega
			}
		}
	}
}

int main() {
	int n = 3, m = 4;
	// int a[100][100] = {
	int a[][100] = {// Mentioning rows is optional
		{1, 2, 3, 4},
		{4, 5, 6, 8},
		{7, 8, 9, 7}
	};
	print(a, n, m);
	int key;
	cin >> key;

	search(a, n, m, key);

	return 0;
}
















