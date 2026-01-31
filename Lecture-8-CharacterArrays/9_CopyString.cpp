#include <iostream>
#include <cstring>
using namespace std;
void copy(char *b, char *a) {
	int len = strlen(a);

	for (int i = 0; i <= len; ++i)
	{
		b[i] = a[i];
	}
}

int main() {

	char a[] = "Hi you";

	char b[100]; // b should have enough space in it to store a

	// copy(b, a); // a ko b mei copy krdo
	strcpy(b, a);

	cout << b << endl;


	return 0;
}
















