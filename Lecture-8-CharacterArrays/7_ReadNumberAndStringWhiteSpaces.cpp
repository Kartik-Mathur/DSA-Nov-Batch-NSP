#include <iostream>
using namespace std;

int main() {

	char a[1000];
	int n;

	cin >> n;
	// cin.ignore(); // It will ignore 1 single character after integer n input
	cin.get(); // read kro ek character but kahi store nhi ho rha toh means ignored
	cin.getline(a, 1000);

	cout << "n : " << n << endl;
	cout << "a : " << a << endl;

	return 0;
}
















