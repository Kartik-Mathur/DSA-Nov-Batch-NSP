#include <iostream>
using namespace std;


int main() {

	char a[] = "AbcDeF@12";
	char b[] = "DeAbc12F@";

	int freq[256] = {};


	for (int i = 0; a[i] != '\0'; ++i)
	{
		int indx = a[i];
		freq[indx] ++;
	}

	for (int i = 0; b[i] != '\0'; ++i)
	{
		int indx = b[i];

		freq[indx]--;
	}

	bool isPermutation = true;

	for (int i = 0; i < 256; ++i)
	{
		if (freq[i] != 0) {
			isPermutation = false;
			break;
		}
	}

	if (isPermutation) {
		cout << "Permutation hai\n";
	}
	else {
		cout << "Permutation nahi hai\n";
	}



	return 0;
}
















