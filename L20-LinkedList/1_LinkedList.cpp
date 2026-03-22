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

void reverseLL(node* &head, node* &tail) {
	node* p = NULL, *c = head, *n = NULL;
	while (c != NULL) {
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	swap(head, tail);
}

node* mid(node* head) {
	if (head == NULL or head->next == NULL) return head;

	node* s = head;
	node* f = head->next;
	while (f != NULL and f->next != NULL) {
		s = s->next;
		f = f->next->next;
	}

	return s;
}

node* mergeSortedLL(node* a, node* b) {
	if (a == NULL) return b;
	if (b == NULL) return a;

	node* nH;
	if (a->data < b->data) {
		nH = a;
		nH->next = mergeSortedLL(a->next, b);
	}
	else {
		nH = b;
		nH ->next = mergeSortedLL(a, b->next);
	}

	return nH;
}

int main() {

	node *head, *tail, *head1, *tail1;
	head1 = tail1 = head = tail = NULL;
	// Create one sorted LL
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 8);

	// Create second sorted LL
	insertAtEnd(head1, tail1, 2);
	insertAtEnd(head1, tail1, 4);
	insertAtEnd(head1, tail1, 6);
	insertAtEnd(head1, tail1, 7);
	insertAtEnd(head1, tail1, 9);
	insertAtEnd(head1, tail1, 10);

	printLL(head);
	printLL(head1);

	node* newHead = mergeSortedLL(head, head1);
	printLL(newHead);



	/*
		node *head, *tail;
		head = tail = NULL;

		insertAtEnd(head, tail, 1);
		insertAtEnd(head, tail, 2);
		insertAtEnd(head, tail, 3);
		insertAtEnd(head, tail, 4);
		insertAtEnd(head, tail, 5);

		printLL(head);
		reverseLL(head, tail);
		printLL(head);

		node* ans = mid(head);
		if (ans != NULL) {
			cout << ans -> data << endl;
		}
		else {
			cout << "Can't find mid of empty LL\n";
		}
	*/
	return 0;
}
















