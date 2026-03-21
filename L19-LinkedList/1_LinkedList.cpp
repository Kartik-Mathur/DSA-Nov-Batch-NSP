#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	// Constructor
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

void insertAtFront(node* &head, node* &tail, int data) {
	node* n = new node(data);
	if (head == NULL) {
		head = tail = n;
	}
	else {
		n->next = head;
		head = n;
	}
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

void insertAtMid(node* &head, node* &tail, int data, int pos) {
	if (pos == 0) {
		insertAtFront(head, tail, data); // Here head will change
	}
	else if (pos >= lengthLL(head)) {
		insertAtEnd(head, tail, data); // Here tail will change
	}
	else {
		node* temp = head;
		for (int i = 1; i <= pos - 1; ++i)
		{
			temp = temp->next;
		}

		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}


int main() {

	node *head, *tail;
	head = tail = NULL; // We never keep garbage in pointers
	insertAtFront(head, tail, 1);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 3);
	insertAtFront(head, tail, 4);

	printLL(head);
	insertAtMid(head, tail, 13, 3);
	printLL(head);

	return 0;
}
















