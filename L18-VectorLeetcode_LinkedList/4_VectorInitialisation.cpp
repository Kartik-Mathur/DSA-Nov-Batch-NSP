#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	// vector<int> v(size, value_for_all_buckets);
	vector<int> v(n, 0); // Run time memory allocation

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << v[i] << " ";
	// }
	// cout << endl;

	// Input via foreach loop
	for (int &d : v) {
		cin >> d;
	}

	// For - Each Loop
	// For every element d that belongs to vector v
	for (int d : v) {
		cout << d << " ";
	}
	cout << endl;



	return 0;
}
















