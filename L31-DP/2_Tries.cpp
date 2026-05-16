#include <iostream>
#include <unordered_map>
using namespace std;

class node{
public:
	char ch;
	unordered_map<char, node*> h;
	bool isEnd;
	node(char c){
		ch = c;
		isEnd = false;
	}
};

class Trie{
	node* root;

	void autoFillHelper(node* temp, string &word){
		if(temp->isEnd == true){
			cout<<word<<endl; // Ek word meine print kar diya
			// return nhi kroge kyunki hume saare words print krne h
		}

		for(auto p: temp->h){
			word.push_back(p.first);
			autoFillHelper(p.second, word);
			word.pop_back();
		}
	}
public:
	Trie(){
		root = new node('\0');
	}

	void insert(string word){
		node* temp = root;
		for (int i = 0; i < word.size(); ++i)
		{
			char ch = word[i];
			if(temp->h.count(ch) == 0){
				node* n = new node(ch);
				temp -> h[ch] = n;
			}

			temp = temp->h[ch];
		}

		temp -> isEnd = true;
	}

	bool search(string word){
		node* temp = root;
		for (int i = 0; i < word.size(); ++i)
		{
			char ch = word[i];
			if(temp->h.count(ch) == 0){
				return false;
			}

			temp = temp->h[ch];
		}

		return temp -> isEnd;
	}

	void autoFill(string word){
		node* temp = root;
		for (int i = 0; i < word.size(); ++i)
		{
			char ch = word[i];
			if(temp->h.count(ch) == 0){
				return;
			}

			temp = temp->h[ch];
		}

		autoFillHelper(temp, word);

	}
};

int main(){

	Trie t;
	t.insert("He");
	t.insert("Hey");
	t.insert("Her");
	t.insert("Hello");
	t.insert("Hell");
	t.insert("bye");

	t.autoFill("He");
	// while(true){
	// 	string s;
	// 	cin>>s;

	// 	if(t.search(s) == true) cout << "Present\n";
	// 	else cout << "Not Present\n";
	// }

	return 0;
}
















