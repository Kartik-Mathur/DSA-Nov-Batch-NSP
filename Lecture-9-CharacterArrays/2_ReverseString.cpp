#include <iostream>
using namespace std;

int main() {

	char a[] = "Coding";
	int len = strlen(a);
	// Way - 1
	int i = 0, j = len - 1;
	while (i < j) {
		swap(a[i], a[j]);
		i++;
		j--;
	}

	// Way - 2
	for (int i = 0; i < len / 2; ++i)
	{
		swap(a[i], a[len - i - 1]);
	}

	cout << a << endl;

	return 0;
}
















