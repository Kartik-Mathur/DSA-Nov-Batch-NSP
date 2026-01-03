#include <iostream>
using namespace std;

int main() {

	int n, ld, ans = 0;
	cin >> n;

	while (n > 0) {
		ld = n % 10;

		ans = ans * 10 + ld;

		n = n / 10;
	}
	cout << "OP: " << ans << endl;

	return 0;
}
















