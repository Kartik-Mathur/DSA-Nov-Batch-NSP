#include <iostream>
#include <queue>
#include <functional> // for using greater<int> and less<int>
using namespace std;

class compare{
public:
	// functor
	bool operator()(int a,int b){
		return a < b;
	}
};

int main(){

	// priority_queue<int> h; // Maxheap
	// priority_queue<int, vector<int>, greater<int> > h; // Minheap
	// priority_queue<int, vector<int>, less<int> > h; // Max heap
	priority_queue<int, vector<int>, compare > h; 


	h.push(2);
	h.push(1);
	h.push(4);
	h.push(5);
	h.push(7);

	while(!h.empty()){
		cout << h.top() << " ";
		h.pop();
	}
	cout <<endl;


	return 0;
}
















