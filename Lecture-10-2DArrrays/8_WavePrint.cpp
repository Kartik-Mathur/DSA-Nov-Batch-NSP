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


void wavePrint(int arr[][100], int n, int m) {
	for (int j = 0; j < m; ++j)
	{
		if (j % 2 == 0) {
			for (int i = 0; i < n; ++i)
			{
				cout << arr[i][j] << ' ';
			}
		}
		else {
			for (int i = n - 1; i >= 0; --i)
			{
				cout << arr[i][j] << ' ';
			}
		}
	}

	cout << endl;
}

int main() {
	int n = 4, m = 4;
	int a[][100] = {
		{1, 2, 3, 10},
		{4, 5, 12, 18},
		{6, 13, 15, 20},
		{9, 14, 22, 25},
	};
	print(a, n, m);

	wavePrint(a, n, m);

	return 0;
}
















