#define node TreeNode

class Pair{
public:
	int rootChori, rootNotChori;
};

class Solution {
public:
	Pair solve(node* root){
		if(root == NULL){
			return {0,0};
		}

		Pair left = solve(root->left);
		Pair right = solve(root->right);

		Pair p;
		p.rootChori = root->val + left.rootNotChori + right.rootNotChori;
		p.rootNotChori = max(left.rootChori, left.rootNotChori) + 
							max(right.rootChori, right.rootNotChori);

		return p;
	}

    int rob(node* root) {
        Pair ans = solve(root);
        return max(ans.rootChori, ans.rootNotChori);
    }
};






