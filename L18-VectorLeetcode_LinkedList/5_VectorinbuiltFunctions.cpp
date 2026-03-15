#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool myCompare(int a, int b) {
	return a < b;
}

int main() {

	vector<int> v = {5, 3, 2, 4, 1};

	// sort(v.begin(), v.end()); // Increasing order
	// sort(v.begin(), v.end(), myCompare); // Decreasing order
	sort(v.begin(), v.end(), [](int a, int b) {
		return a < b;
	});


	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;






	return 0;
}
















