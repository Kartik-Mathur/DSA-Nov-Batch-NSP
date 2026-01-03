#include <iostream>
using namespace std;

int main() {

	int n; // Assume n is a perfect square: 4, 9, 16, 25, 36, 49 ......
	cin >> n;

	/*
	Logic
	n = 25
	i: 0, 0*0 <= 25
	i: 1, 1*1 <= 25
	i: 2, 2*2 <= 25
	i: 3, 3*3 <= 25
	i: 4, 4*4 <= 25
	i: 5, 5*5 <= 25

	i: 6, 6*6 <= 25
	*/

	float inc = 1;

	int i = 0;

	while (i * i <= n) {

		i = i + inc;
	}

	i = i - inc;

	cout << i << endl;


	return 0;
}
















