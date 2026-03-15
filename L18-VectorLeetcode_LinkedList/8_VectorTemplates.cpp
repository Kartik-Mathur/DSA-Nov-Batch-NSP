#include <iostream>
using namespace std;

// Vector<int> v;
template<typename T> // T -> int as per Vector<int> and T-> bool as per Vector<bool>
class Vector {
	T *a;
	int cs;
	int ts;
public:

	Vector(int s = 2) {
		cs = 0;
		ts = s; // ts is the capacity of the vector
		a = new T[s];
	}

	void push_back(T d) {
		if (ts == cs) {
			T *na = new T[2 * ts];
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

	T& operator[](int i) {
		return a[i];
	}
};

int main() {
	int n;
	cin >> n;


	Vector<char> v(n);

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
















