#include <iostream>
using namespace std;

int main() {

	char a[] = "abc";
	int n = strlen(a);

	for (int X = 0; X <= (1 << n) - 1; ++X)
	{
		for (int i = 0; i < n; ++i)
		{
			if ((X & (1 << i)) > 0) {
				cout << a[i];
			}
		}
		cout << endl;
	}

	return 0;
}
















