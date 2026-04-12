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

node* insertInBST(node* root,int data){
	if(root == NULL){
		root = new node(data);
		return root;
	}

	if(root -> data < data){
		root->right = insertInBST(root->right, data);
	}
	else{
		root->left = insertInBST(root->left, data);
	}
	return root;
}

void printNodesInRange(node* root,int k1,int k2){
	if(root == NULL){
		return;
	}	

	printNodesInRange(root->left,  k1, k2);
	if(root->data >= k1 and root->data<=k2){
		cout << root->data <<" ";
	}
	printNodesInRange(root->right, k1, k2);
}

node* createBST(){
	int data;
	cin>>data;

	node* root = NULL;

	while(data != -1){

		root = insertInBST(root, data);

		cin>>data;
	}
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

class LinkedList{
public:
	node* head, *tail;
};

LinkedList bstToLL(node* root){
	if(root == NULL){
		return {NULL, NULL};
	}

	if(root -> left != NULL and root->right != NULL){
		LinkedList left = bstToLL(root->left);
		LinkedList right = bstToLL(root->right);

		left.tail->right = root;
		root->right = right.head;
		return {left.head, right.tail};
	}
	else if(root -> left != NULL and root->right == NULL){
		LinkedList left = bstToLL(root->left);
		left.tail->right = root;
		return {left.head, root};
	}
	else if(root -> left == NULL and root->right != NULL){
		LinkedList right = bstToLL(root->right);
		root->right = right.head;
		return {root, right.tail};
	}
	else{ // root -> left == NULL and root->right == NULL
		return {root, root};
	}
}

int main(){
	// 8 3 10 1 6 14 4 7 13 -1
	node* root = createBST();

	LinkedList l = bstToLL(root);

	node* temp = l.head;
	while(temp != NULL){
		cout << temp->data << " --> ";
		temp = temp -> right;
	}
	cout << "NULL\n";
	

	return 0;
}
















