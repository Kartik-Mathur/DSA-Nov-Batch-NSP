#include <iostream>
using namespace std;

void toh(int n, char src, char helper, char destination) {
	if (n == 0) {
		return;
	}

	toh(n - 1, src, destination, helper);
	cout << "Take disk " << n << " from " << src << " to " << destination << endl;
	toh(n - 1, helper, src, destination);
}

int main() {

	int n;
	cin >> n;


	toh(n, 'A', 'B', 'C');

	return 0;
}
















