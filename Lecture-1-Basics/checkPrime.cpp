#include <iostream>
using namespace std;

int main() {
	// 1. Number ip karo jo check krna hai prime hai ya nahi
	int n;
	cin >> n;

	// 2. [2,n-1] har ek number se divide krke dekhna hai -> LOOP
	int i = 2;
	while (i <= n - 1) {

		if (n % i == 0) { // n%i -> 0 means n divide ho gaya i se and remainder is 0
			cout << "Not prime\n";
			return 0;//exit, pata lagg gaya prime nhi hai toh end karo
		}

		i = i + 1;
	}

	// Yaha aa gaye mtlb n kisi bhi i se divide nhi hua
	cout << "Prime\n";

	return 0;
}
















