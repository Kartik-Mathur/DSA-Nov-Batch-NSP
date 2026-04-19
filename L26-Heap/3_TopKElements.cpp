#include <iostream>
#include <queue>
#include <functional> 
using namespace std;

void printHeap(priority_queue<int, vector<int>, greater<int> > h){
	while(!h.empty()){
		cout << h.top() << " ";
		h.pop();
	}
	cout <<endl;

}

int main(){


	int num, k = 3;
	priority_queue<int, vector<int>, greater<int> > h; // Minheap

	while(true){

		cin>>num;

		if(num == -1){
			// Print top k elements
			printHeap(h);

		}
		else{
			if(h.size() < k) {
				h.push(num);
			}
			else{
				if(h.top() < num){
					h.pop();
					h.push(num);
				}
			}
		}


	}

	return 0;
}
















