#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int n;
	cin >> n;
	v.reserve(n); // Will create the vector of n size that we can use

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}


	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
















