#include <iostream>
using namespace std;

char a[][10] = {
	"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
};

void intToString(int n) {
	// base case
	if (n == 0) {
		return;
	}

	// recursive case
	intToString(n / 10);
	int last_digit = n % 10;
	cout << a[last_digit] << " ";
}

int main() {

	intToString(2048);

	return 0;
}
















