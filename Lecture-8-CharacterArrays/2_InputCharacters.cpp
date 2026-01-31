#include <iostream>
using namespace std;

int main() {

	char a[100];

	/*
	hello world
	Output: hello
	// cin ignores whitespace characters....
	*/
	// cin >> a;
	// ----------------------------------------------------------------------------
	cin.getline(a, 100, '$');
	/*
	cin.getline(character_array, numberOfBuckets, delimiter_character)
	delimiter_character by default is '\n'(new line means enterKey)
	*/
	cout << "a : " << a << endl;

	return 0;
}
















