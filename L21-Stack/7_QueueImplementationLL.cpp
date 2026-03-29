#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

class Queue {
	node* head, *tail; // Class ke bahar yeh access nhi hone chahiye
public:
	Queue() {
		head = tail = NULL;
	}

	void push(int d) {
		node* n = new node(d);
		if (head == NULL) {
			head = tail = n;
		}
		else {
			tail->next = n;
			tail = n;
		}
	}

	void pop() {
		if (head == NULL) {
			return;
		}
		else if (head->next == NULL) {
			delete head;
			head = tail = NULL;
		}
		else {
			node* t = head;
			head = head->next;
			delete t;
		}
	}

	int front() {
		return head->data;
	}

	bool empty() {
		return head == NULL;
	}
};

int main() {

	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	while (!q.empty()) {
		cout << q.front() << " ";

		q.pop();
	}
	return 0;
}
















