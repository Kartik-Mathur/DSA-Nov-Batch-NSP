#include <iostream>
using namespace std;

class node{
public:
	node* left,*right;
	int no;
	node(){
		left = right = NULL;
	}
};

class Trie{
	node* root;
public:
	Trie(){
		root = new node();
	}

	void add(int n){
		node* temp = root;
		for (int i = 30; i >= 0; --i) {
			if((n & (1<<i)) > 0){
				if(temp -> right == NULL){
					temp -> right = new node();
				}
				temp = temp->right;
			}
			else{
				if(temp -> left == NULL){
					temp -> left = new node();
				}
				temp = temp->left;
			}
		}

		temp -> no = n;
	}

	int findElement(int n){
		node* temp = root;
		for (int i = 30; i >= 0; --i) {
			int bit = (n &(1<<i));

			if(bit == 0){
				if(temp -> right != NULL){
					temp = temp->right;
				}
				else {
					temp = temp->left;
				}
			}
			else{
				if(temp -> left != NULL){
					temp = temp -> left;
				}
				else{
					temp = temp->right;
				}
			}
		}

		return temp -> no;
	}

	int maxXorPair(int *a,int n){
		int ans = INT_MIN;

		for (int i = 0; i < n; ++i)
		{
			add(a[i]);
			int x = findElement(a[i]);

			ans = max(ans, a[i]^x);
		}

		return ans;
	}	
};

int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);

	Trie t;
	int ans = t.maxXorPair(a,n);

	cout << "Ans: "<<ans<<endl;


	return 0;
}
















