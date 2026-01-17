#include<iostream>
using namespace std;

long long reverseNumber (long long n) {
	long long ans = 0, tmp;
	while (n != 0) {
		tmp = n % 10;
		ans = (ans * 10) + (tmp);
		n = n / 10;

	}
	return ans;
}

long long addingReversedNumbers(long long a, long long  b) {
	a = reverseNumber(a);
	b = reverseNumber(b);
	long long sum = a + b;
	return reverseNumber(sum);
}
int main() {

	long long n, a, b;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << addingReversedNumbers(a, b) << endl;
	}

	return 0;
}