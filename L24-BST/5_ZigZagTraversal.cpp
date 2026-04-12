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

void zigZagTraversal(node* root){
	if(root == NULL){
		return;
	}

	queue<node*> q;
	
	int level = 0;
	vector<int> v;

	q.push(root); 
	q.push(NULL);

	while(!q.empty()){
		node* x = q.front();
		q.pop();

		if(x == NULL){
			// Print the vector
			if(level%2 == 1){
				reverse(v.begin(), v.end()); // Inbuilt function to reverse vector
			}

			for(int i = 0 ; i < v.size() ; i++){
				cout << v[i]<< " ";
			}

			v.clear(); // Empty the vector
			level++;

			// Null aane par ek level khatam toh go to next line
			cout << endl;
			// If queue khali nhi hai that means there are more levels jo print honge
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			v.push_back(x->data);

			// if lagana padega else nhi laga skte dono child ko check krne ke liye
			// left hai and right hai toh dono ko queue mei daalna hai ek ko nhi
			if(x -> left != NULL){
				q.push(x->left); 
			}

			if(x->right != NULL){
				q.push(x->right);
			}
		}
	}
}


int main(){
	// 8 3 10 1 6 14 4 7 13 -1
	node* root = createBST();

	zigZagTraversal(root);

	return 0;
}
















