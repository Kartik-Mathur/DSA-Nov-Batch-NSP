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

node* createBST(int *arr,int s,int e){
	if(s>e){
		return NULL;
	}
	
	int m = (s+e)/2;
	node* root = new node(arr[m]);

	root->left = createBST(arr,s,m-1);
	root->right = createBST(arr,m+1,e);

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
	// 8 3 10 1 6 14 4 7 13 -1
	int a[] = {1, 2, 3, 4, 5,6,7,8};
	int n = sizeof(a)/sizeof(int);

	node* root = createBST(a,0,n-1);

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	

	return 0;
}
















