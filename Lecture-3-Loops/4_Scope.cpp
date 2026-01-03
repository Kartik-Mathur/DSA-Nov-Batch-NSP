#include <iostream>
using namespace std;
// GLOBAL SCOPE
int a = -1000;

int main() {

	int a = 1;


	if (a > 0) {
		int b = 10;
		int a = 100;
		a++;
		cout << a << endl;
		cout << b << endl;

		// SCOPE RESOLUTION OPERATOR ::
		cout << ::a << endl;
		::a = ::a + 1;
	}
	cout << ::a << endl;
	// cout << a << endl;


	// cout << b << endl;


	return 0;
}
















