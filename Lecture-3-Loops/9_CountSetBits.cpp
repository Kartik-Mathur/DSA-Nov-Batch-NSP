#include <iostream>
using namespace std;

int main() {
	int no;
	int cnt = 0;

	for (cin >> no; no > 0 ; no /= 2)
	{
		int rem = no % 2;
		if (rem == 1) {
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}
















