#include <iostream>
using namespace std;

int main() {
	int x = 0, y = 0;

	char ch = cin.get();
	while (ch != '\n') {

		if (ch == 'E') {
			x++;
		}
		else if (ch == 'W') {
			x--;
		}
		else if (ch == 'N') {
			y++;
		}
		else {
			y--;
		}
		ch = cin.get();
	}

	// Print E if x>=0
	if (x >= 0) {
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}
	}


	if (y >= 0) { // Print N if y>=0
		for (int i = 0; i < y; ++i)
		{
			cout << 'N';
		}
	}
	else { // Print S if y<=0
		y = -y;

		for (int i = 0; i < y; ++i)
		{
			cout << 'S';
		}
	}

	// Print W if x<=0
	if (x <= 0) {
		x = -x;
		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}
	}


	return 0;
}
















