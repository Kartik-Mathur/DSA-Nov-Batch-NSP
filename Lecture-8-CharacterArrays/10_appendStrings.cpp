#include <iostream>
using namespace std;

int main() {

	char a[100] = "Hello";
	char b[] = "World";

	int len_b = strlen(b);
	int len_a = strlen(a);
	int j = len_a;
	int i = 0;
	while (i <= len_b) {
		a[j] = b[i];
		i++;
		j++;
	}

	cout << a << endl;

	return 0;
}
















