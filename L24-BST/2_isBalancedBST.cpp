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

class Pair{
public:
	bool isBalanced;
	int height;
};

Pair checkBalanced(node* root){
	
	if(root == NULL){
		// Pair p;
		// p.isBalanced = true;
		// p.height = 0;
		// return p;

		return {true, 0};
	}

	Pair p;
	Pair left = checkBalanced(root->left);
	Pair right = checkBalanced(root->right);

	p.height = max(left.height, right.height) + 1;
	p.isBalanced = left.isBalanced && right.isBalanced && (abs(left.height- right.height)<=1);

	return p;
}

bool checkBST(node* root,int mi = INT_MIN,int mx = INT_MAX){
	if(root == NULL){
		return true;
	}

	if(root->data >= mi and root->data <=mx){
		bool isLeftBST = checkBST(root->left, mi, root->data);
		bool isRightBST = checkBST(root->right, root->data, mx);
		if(isLeftBST == true and isRightBST == true){
			return true;
		}
	}

	return false;
}

int main(){
	// 8 3 10 1 6 14 4 7 13 -1
	node* root = createBST();

	Pair ans = checkBalanced(root);

	cout << "Height    : "<<ans.height<<endl;
	cout << "Balanced  : "<<ans.isBalanced<<endl;

	if(checkBST(root) == true){
		cout << "IS BST\n";
	}
	else{
		cout << "Not A BST\n";
	}


	return 0;
}
















