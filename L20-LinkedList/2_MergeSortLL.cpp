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

node* mergeSort(node* head) {
	// base case
	if (head == NULL or head->next == NULL) {
		return head;
	}

	// Recursive case
	// 1. Divide
	node* m = mid(head);
	node* a = head, *b = m->next;
	m->next = NULL;
	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);
	// 3. Merge
	node* nH = mergeSortedLL(a, b);
	return nH;
}

int main() {
	node *head, *tail;
	head = tail = NULL;

	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 5);

	printLL(head);
	head = mergeSort(head);
	printLL(head);

	return 0;
}
















