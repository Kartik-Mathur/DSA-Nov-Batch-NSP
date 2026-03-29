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

int countNodes(node* root) {
	// base case
	if (root == NULL) {
		return 0;
	}

	// recursive case
	int LSTCount = countNodes(root->left);
	int RSTCount = countNodes(root->right);
	return 1 + LSTCount + RSTCount;
}

int height(node* root) { // O(N)
	if (root == NULL) {
		return 0;
	}

	int LSTHeight = height(root->left);
	int RSTHeight = height(root->right);
	return max(LSTHeight, RSTHeight) + 1;
}

int diameter(node* root) { // O(N^2)
	if (root == NULL) {
		return 0;
	}

	int op1 = height(root->left) + height(root -> right);
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);

	return max(op1, max(op2, op3));
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
	cout << "Total Nodes " << countNodes(root) << endl;
	cout << "Diameter    " << diameter(root) << endl;

	return 0;
}
















