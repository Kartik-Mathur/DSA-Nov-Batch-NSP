#include <iostream>
#include <queue>
#include <vector>
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


void printLeftView(node* root, int cl, int &ml){
	if(root == NULL){
		return;
	}

	if(cl > ml){
		ml = cl;
		cout << root->data<<" ";
	}

	printLeftView(root->left, cl+1, ml);
	printLeftView(root->right, cl+1, ml);
}



int main(){
	// 8 3 10 1 6 14 4 7 13 -1
	node* root = createBST();
	int cl = 0,ml = -1;
	printLeftView(root,cl,ml);
	return 0;
}
















