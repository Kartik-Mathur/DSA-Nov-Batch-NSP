#include <iostream>
using namespace std;

int main() {

	int a[100];
	int n;
	cin >> n; // Pehle yeh batao kitne number input honge

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	// Print kardo reverse order mei
	for (int i = n - 1; i >= 0; --i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	return 0;
}
















