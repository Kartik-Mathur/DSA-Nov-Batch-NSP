#include <iostream>
using namespace std;

class Queue {
public:
	int *a;
	int n;
	int cs;
	int f, r;

	Queue(int s = 4) {
		a = new int[s];
		cs = 0;
		n = s;
		f = 0;
		r = n - 1;
	}

	void push(int d) {
		if (cs < n) {
			r = (r + 1) % n;
			a[r] = d;
			cs++;
		}
		else {
			cout << "Overflow\n";
		}
	}

	void pop() {
		if (cs > 0) {
			f = (f + 1) % n;
			cs--;
		}
		else
		{
			cout << "Underflow\n";
		}
	}

	int front() {
		return a[f];
	}

	bool empty() {
		return cs == 0;
	}
};

int main() {

	Queue q;
	// Queue q(5); // ab 5 elements add krne par Overflow nhi aaega
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while (!q.empty()) {
		cout << q.front() << " ";

		q.pop();
	}






	return 0;
}
















