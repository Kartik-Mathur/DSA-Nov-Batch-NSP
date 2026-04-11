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

	printNodesInRange(root->left, k1,k2);
	if(root->data >= k1 and root->data<=k2){
		cout << root->data <<" ";
	}
	printNodesInRange(root->right, k1,k2);
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


int main(){

	node* root = createBST();
	// 8 3 10 1 6 14 4 7 13 -1
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	printNodesInRange(root,5,10);

	return 0;
}
















