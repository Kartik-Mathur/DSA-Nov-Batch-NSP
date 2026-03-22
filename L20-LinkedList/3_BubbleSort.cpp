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

void bubbleSortLL(node* &head) {
	int len = lengthLL(head);

	for (int i = 0; i < len - 1; ++i)
	{
		node* c = head, *p = NULL, *n;

		while (c != NULL and c->next != NULL) {
			n = c->next;
			if (c->data > n->data) {
				// swapping hogi
				if (p == NULL) {
					// head change hoga
					c->next = n->next;
					n->next = c;
					head = p = n;
				}
				else {
					// head change nhi hoga
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else {
				// swapping nhi hogi
				p = c;
				c = n;
			}
		}
	}
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
	bubbleSortLL(head);
	printLL(head);

	return 0;
}
















