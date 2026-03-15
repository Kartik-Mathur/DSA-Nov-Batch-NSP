#include <iostream>
using namespace std;

class Vector {
	int *a;
	int cs;
	int ts;
public:

	Vector(int s = 2) {
		cs = 0;
		ts = s; // ts is the capacity of the vector
		a = new int[s];
	}

	void push_back(int d) {
		if (ts == cs) {
			int *na = new int[2 * ts];
			for (int i = 0; i < ts; ++i)
			{
				na[i] = a[i];
			}

			ts *= 2;
			delete []a;
			a = na;
		}

		a[cs++] = d;
	}

	void pop_back() {
		if (cs > 0) {
			cs--;
		}
	}

	int size() {
		return cs;
	}

	int capacity() {
		return ts;
	}

	int& operator[](int i) {
		return a[i];
	}

};

int main() {
	int n;
	cin >> n;


	Vector v(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
















