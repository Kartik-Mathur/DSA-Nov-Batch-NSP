#include <iostream>
using namespace std;

int main() {

	int freq[26] = {0};
	/*
	a[]: "aaaaaa"
	b[]: "bbbbbb"
	*/

	char a[] = "adbebacc";
	char b[] = "ebaadbz";

	for (int i = 0; a[i] != '\0'; ++i)
	{
		int indx = a[i] - 'a';

		freq[indx] ++;
	}

	for (int i = 0; b[i] != '\0'; ++i)
	{
		int indx = b[i] - 'a';

		freq[indx]--;
	}

	bool isPermutation = true;

	for (int i = 0; i < 26; ++i)
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








