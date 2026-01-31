#include <iostream>
using namespace std;

int main() {
	char a[1000];
	char largest[1000]; // Khaali hai

	int n, len_largest = 0; // len_largest is empty
	cin >> n;

	// Ignore the first character after n
	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 1000);

		int len = strlen(a);
		if (len > len_largest) {
			len_largest = len;
			strcpy(largest, a);
		}
	}

	cout << "Largest string is     : " << largest << endl;
	cout << "Largest string len is : " << len_largest << endl;


	return 0;
}
















