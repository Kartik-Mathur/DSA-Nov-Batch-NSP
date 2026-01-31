#include <iostream>
#include <cstring> // For strlen function usage
using namespace std;
// Character array ke andar function mei size dena is not needed
// We know character array ends at '\0'(NULL Character)
bool isPalindrome(char *a) {

	int i = 0, j = strlen(a) - 1;
	while (i < j) {
		if (a[i] != a[j]) {
			return false;
		}

		i++;
		j--;
	}

	return true;
}

int main() {

	char a[100];
	cin >> a;

	if (isPalindrome(a)) {
		cout << "Palindrome\n";
	}
	else {
		cout << "Not a Palindrome\n";
	}



	return 0;
}
















