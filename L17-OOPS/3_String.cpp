#include <iostream>
#include <cstring>
using namespace std;

void updateString(string x) {
	x += x;
}

int main() {

	string s;

	s = "Hello";
	cout << s << endl;
	updateString(s);
	cout << s << endl;

	for (int i = 0; i < s.size(); ++i)
	{
		cout << s[i] << '-';
	}
	cout << endl;

	// cout << s << endl;
	// s += "World";
	// cout << s << endl;

	// s.push_back('1'); // Last mei ek character ko insert kr dega
	// cout << s << endl;

	// s.pop_back();
	// cout << s << endl;

	// char a[] = "Hello World";
	// a = "Learning Strings";

	return 0;
}
















