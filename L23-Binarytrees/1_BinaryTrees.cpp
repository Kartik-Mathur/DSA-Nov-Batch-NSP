#include <iostream>
#include <queue>
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

// Multiple cheezon ko return krwana ho agar toh class ke through kar skte hai
class Pair{
public:
	int height,diameter;
};

// Here we are asking for two things Height and Diameter
Pair fastDiameter(node* root){
	if(root == NULL){
		Pair p;
		p.height = p.diameter = 0;
		return p;
	}

	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	Pair p;
	p.height = max(left.height, right.height) + 1;

	// Diamater
	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;
	p.diameter = max(op1, max(op2,op3));

	return p;
}


node* searchKey(node* root,int key){
	if(root == NULL){
		return NULL;
	}

	if(root->data == key){
		return root;
	}

	// Recursion se bolo LST mei search krke bataye key ko
	node* ans = searchKey(root->left,key);
	if(ans != NULL) { // LST mei key mill gai toh kaam done us node ke address ko return kardo
		return ans;
	}

	// LST mei nhi milli tab RST mei check krenge
	ans = searchKey(root->right, key);
	// Agar RST mei mill gai node toh uska address return kardo
	// Agar RST mei nhi milli ans mei NULL aaega toh NULL return kardo
	return ans;
}

void mirrorTree(node* root){
	if(root == NULL){
		return;
	}

	swap(root->left, root->right);
	mirrorTree(root->left);
	mirrorTree(root->right);
}

void printLevelOrder(node* root){
	if(root == NULL){
		return;
	}

	queue<node*> q;

	q.push(root); 
	q.push(NULL);

	while(!q.empty()){
		node* x = q.front();
		q.pop();

		if(x == NULL){
			// Null aane par ek level khatam toh go to next line
			cout << endl;
			// If queue khali nhi hai that means there are more levels jo print honge
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout << x->data << " "; // Print the node data

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

int pre[] = {8 ,10, 1, 6, 4, 7, 3, 14,13 };
int k = 0;

node* makeTree(int *in,int s,int e){
	if(s>e){
		return NULL;
	}

	node* root = new node(pre[k++]);
	int j;
	for (int i = s; i <= e; ++i)
	{
		if(in[i] == root->data){
			j = i;
			break;
		}
	}

	root -> left  = makeTree(in,s,j-1);
	root -> right = makeTree(in,j+1,e);
	return root;
}


int main() {

	// node* root = createTree();
	int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 14};
	int n = sizeof(in)/sizeof(int);
	node* root = makeTree(in,0,n-1);

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	cout << "Total Nodes " << countNodes(root) << endl;
	cout << "Diameter    " << diameter(root) << endl;

	Pair ans = fastDiameter(root);
	cout << "Fast Height   : "<<ans.height<<endl;
	cout << "Fast Diameter : "<<ans.diameter<<endl;

	node* x =searchKey(root,100);
	if(x!=NULL){
		cout <<"Found : "<<x->data<<endl;
	}
	else {
		cout <<"Not Found\n";
	}

	printLevelOrder(root);






	return 0;
}
















