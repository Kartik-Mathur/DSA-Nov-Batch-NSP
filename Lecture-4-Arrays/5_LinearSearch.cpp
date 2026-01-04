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

	cout << "Enter Key: ";
	int key;
	cin >> key;

	int ans_indx = -1; // Kyunki yeh ek valid index nahi hai...

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			ans_indx = i;
			break; // Loop se exit ho jaao as key mill gai
		}
	}

	// Check karlo ans_indx ko
	cout << ans_indx << endl;

	return 0;
}
















