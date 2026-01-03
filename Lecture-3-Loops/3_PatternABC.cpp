#include <iostream>
using namespace std;

int main() {

	int n, i, r;
	char ch;

	cin >> n;

	for (r = 1; r <= n; ++r)
	{
		ch = 'A';
		// Print increasing characters
		for (i = 0; i < n - r + 1; ++i)
		{
			cout << ch;
			ch++;
		}
		// Decreasing characters
		// ch--;

		for (int i = 0; i < n - r + 1; ++i)
		{
			cout << --ch;
		}

		cout << endl;
	}

	return 0;
}
















