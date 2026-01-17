#include <iostream>
using namespace std;

void printTable(int init, int fval, int step) {
	// Formula: C = (F-32)*(5/9);
	int f = init;
	while (f <= fval) {

		int c = (5 / 9.0) * (f - 32);

		cout << f << "  " << c << endl;


		f = f + step;
	}
}

int main() {
	int init, fval, step;
	cin >> init >> fval >> step;
	// Yeh teeno variables ka data upar function ko provide krwana padega
	printTable(init, fval, step); // this is how we send the data

	return 0;
}
















