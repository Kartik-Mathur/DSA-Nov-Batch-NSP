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

int lengthLL(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt++;
		head = head->next;
	}

	return cnt;
}

void insertAtEnd(node* &head, node* &tail, int data) {
	node* n = new node(data);
	if (head == NULL) {
		head = tail = n;
	}
	else {
		tail->next = n;
		tail = n;
	}
}

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << " --> ";
		head = head->next;
	}
	cout << "NULL\n";
}

void breakTheCycle(node* head, node* f) {
	node*s = head, *fp;
	while (f != s) {
		fp = f;
		f = f->next;
		s = s->next;
	}

	fp->next = NULL;
}

bool isCyclicLL(node* head) { // Floyd's cycle detection algorithm
	node* s = head, *f = head;
	while (f != NULL and f->next != NULL) {
		s = s->next;
		f = f->next->next;
		if (f == s) {
			breakTheCycle(head, f);
			return true;
		}
	}

	return false;
}

int main() {

	node *head, *tail;
	head = tail = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 8);
	insertAtEnd(head, tail, 9);
	insertAtEnd(head, tail, 10);
	insertAtEnd(head, tail, 11);
	insertAtEnd(head, tail, 12);
	insertAtEnd(head, tail, 13);
	insertAtEnd(head, tail, 14);

	// Create cycle
	tail->next = head->next->next->next->next->next;

	if (isCyclicLL(head)) {
		cout << "Cycle hai\n";
		printLL(head);
	}
	else {
		printLL(head);
	}

	return 0;
}
















