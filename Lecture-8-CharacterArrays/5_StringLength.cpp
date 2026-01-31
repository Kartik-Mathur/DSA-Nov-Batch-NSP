#include <iostream>
using namespace std;

int length(char *a) {
	int i = 0;
	while (a[i] != '\0') {
		i++;
	}
	// i is pointing at NULL character and its value would be the length
	return i;
}

int main() {

	char a[100];
	cin.getline(a, 100);

	cout << length(a) << endl;
	cout << strlen(a) << endl;


	return 0;
}
















