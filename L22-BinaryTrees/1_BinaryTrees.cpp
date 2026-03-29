#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* createTree() {
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}

	node* root = new node(data);
	root->left = createTree();
	root->right = createTree();

	return root;
}

void preOrder(node* root) {
	if (root == NULL) {
		return ;
	}

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root) {
	if (root == NULL) {
		return ;
	}

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(node* root) {
	if (root == NULL) {
		return ;
	}

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {

	node* root = createTree();

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	return 0;
}
















