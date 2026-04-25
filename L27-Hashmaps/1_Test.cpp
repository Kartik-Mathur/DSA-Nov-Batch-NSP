#include <iostream>
using namespace std;

class node{
public:
	string key;
	int value;
	node* next;
	node(string s,int v){
		key = s;
		value = v;
		next = NULL;
	}
};


class Hashmap{
	node** a;
	int ts;
	int cs; 

	int hashFunction(string key){
		int mul = 1, ans = 0;
		for (int i = 0; i < key.size(); ++i)
		{
			ans += (key[i]%ts)*(mul%ts);
			ans %= ts;
			mul *= 19;
			mul%=ts;
		}

		return ans % ts;
	}

	void rehashing(){
		node** olda = a;
		int oldts = ts;
		cs = 0;
		a = new node*[2*ts];
		ts*=2;

		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}

		for (int i = 0; i < oldts; ++i)
		{
			node* head = olda[i];
			while(head != NULL){
				node* t = head;
				insert(head->key,head->value);
				head = head->next;
				delete t;
			}
		}
	}

public:
	// Constructor
	Hashmap(int s=5){ // By default size of hashtable would be 5 
		a = new node*[s];
		for (int i = 0; i < s; ++i)
		{
			a[i] = NULL; // as pointers should not have garbage value
		}

		ts = s; // Total size of the hashmap table
		cs = 0; // Right now there are zero nodes inside the array
	}

	void insert(string key, int val){
		int hashIndex = hashFunction(key);

		node* n = new node(key,val);
		n->next = a[hashIndex];
		a[hashIndex] = n;
		cs++; 

		float load_factor = cs/(ts*1.0);
		if(load_factor >= 0.6){
			rehashing();
		}
	}

	void print(){
		for (int i = 0; i < ts; ++i)
		{
			node* head = a[i];
			cout << i << " : ";
			while(head != NULL){
				
				cout << "("<<head->key<<", "<<head->value<<") ";
				head = head->next;
			}
			cout << endl;
		}
	}

};

int main(){

	Hashmap h(7);

	h.insert("mango",100);
	h.insert("apple",150);
	h.insert("Kiwi",50);
	h.insert("Pineapple",120);
	h.insert("Orange",190);
	h.insert("Guava",290);

	h.print();


	return 0;
}
















