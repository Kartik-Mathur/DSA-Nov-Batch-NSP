#include <iostream>
using namespace std;

void printString(string x) {
	for (int i = 0 ; i < x.size() ; i++) {
		cout << x[i] << " - ";
	}
	x = "Changed String";
	cout << endl;
}

int main() {

	/*
	char a[100];
	a = "Hello World"; // Incorrect
	strcpy(a, "Hello World"); // Correct way
	strcat(a, ", Learning Strings");
	*/

	string s; // s is an object of string class

	s = "HelloWorld";
	cout << s << endl;

	// s += ", Learning string"; // Concatenation
	// cout << s << endl;

	printString(s);
	cout << "After Print : " << s << endl;

	s.push_back('T');
	cout << s << endl;
	s.pop_back();
	cout << s << endl;

	// reverse(s.begin(), s.end());
	// cout << s << endl;


	// substr function
	// s.substr(index, us_index_se_number_of_characters);
	cout << s.substr(3, 4) << endl;
	cout << s.substr(3) << endl; // 3rd index se last tak saare characters lelo


	return 0;
}
















