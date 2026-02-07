#include <iostream>
using namespace std;

int main() {

	int a[100][100];

	int number = 1;
	int n, m;
	cin >> n >> m; // n: no of rows, m: no of cols

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = number;
			number ++;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}



	return 0;
}
















