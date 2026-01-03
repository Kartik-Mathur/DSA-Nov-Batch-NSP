#include <iostream>
using namespace std;

int main() {


	int init, fval, step;
	cin >> init >> fval >> step;

	// Formula: C = (F-32)*(5/9);
	int f = init;
	while (f <= fval) {

		int c = (5 / 9.0) * (f - 32);

		cout << f << "  " << c << endl;


		f = f + step;
	}

	return 0;
}
















