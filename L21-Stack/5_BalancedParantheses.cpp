#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string &str) {
	stack<char> s;

	for (int i = 0; i < str.size(); ++i)
	{
		char ch = str[i];
		switch (ch) {
		case '(':
		case '[':
		case '{':
			s.push(ch);
			break;
		case ')':
			if (!s.empty() and s.top() == '(') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		case ']':
			if (!s.empty() and s.top() == '[') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		case '}':
			if (!s.empty() and s.top() == '{') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		}
	}

	return s.empty() == true;
}

int main() {

	string s = "(a+b*[c+d] + {x+y})";

	if (isBalanced(s)) {
		cout << "Balanced hai\n";
	}
	else {
		cout << "Not Balanced\n";
	}


	return 0;
}
















