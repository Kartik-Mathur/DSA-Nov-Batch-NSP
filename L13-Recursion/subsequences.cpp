#include <iostream>
using namespace std;

void subsequences(char *ip, int i, char*op, int j) {
	// base case
	if (ip[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}
	// recursive case
	// 1. ith Character ko op[] mei mat lo
	subsequences(ip, i + 1, op, j);
	// 2. ith character ko op[] mei le lo
	op[j] = ip[i];
	subsequences(ip, i + 1, op, j + 1);
}

int main() {

	char ip[] = "abc";
	char op[100];
	subsequences(ip, 0, op, 0);
	return 0;
}
















