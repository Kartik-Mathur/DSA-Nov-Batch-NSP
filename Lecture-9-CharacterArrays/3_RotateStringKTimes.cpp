#include <iostream>
using namespace std;

void rotateString1(char *a, int k) {
	int len = strlen(a);
	k %= len;

	for (int i = 0; i < k; ++i)
	{
		char c = a[len - 1];
		for (int i = len - 2; i >= 0; --i)
		{
			a[i + 1] = a[i];
		}

		a[0] = c;
	}
}


void rotateString2(char *a, int k) {
	int len = strlen(a);
	k %= len;

	// 1. Shift all characters k buckets ahead to empty [0,k-1] index buckets
	for (int i = len - 1; i >= 0; i--)
	{
		a[i + k] = a[i];
	}

	// 2. Bring the k characters to front
	for (int j = 0, i = len; j < k; ++j, i++)
	{
		a[j] = a[i];
	}

	// 3. Add Null character
	a[len] = '\0';
}

void reverseString(char *a, int i, int j) {
	while (i < j) {
		swap(a[i], a[j]);
		i++;
		j--;
	}
}
void rotateString3(char *a, int k) {
	int len = strlen(a);
	k %= len;

	// 1. Reverse Entire String
	reverseString(a, 0, len - 1);

	// 2. Reverse [0,k-1];
	reverseString(a, 0, k - 1);

	// 3. Reverse [k,len-1]
	reverseString(a, k, len - 1);
}

int main() {

	char a[] = "Coding";

	rotateString3(a, 4);

	cout << a << endl;

	return 0;
}
















