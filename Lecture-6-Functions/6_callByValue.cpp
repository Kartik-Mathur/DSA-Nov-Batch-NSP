#include <iostream>
using namespace std;

void update(int n) {

	n = n + 1;

}

void updateByRef(int &n) {

	n = n + 1;

}

int main() {

	int a = 1;

	cout << "a before: " << a << endl;

	// a = a + 1;
	updateByRef(a);

	cout << "a after : " << a << endl;

	return 0;
}
















