#include <iostream>
using namespace std;

int stringToInt(char *a, int n) {
	if (n == 0) {
		return 0;
	}

	// recursive case
	int digit = a[n - 1] - '0';
	int chotiProblem = stringToInt(a, n - 1);
	return chotiProblem * 10 + digit;
}

int main() {

	char a[] = "1234";

	int ans = stringToInt(a, strlen(a));

	cout << ans + 10 << endl;

	return 0;
}
















