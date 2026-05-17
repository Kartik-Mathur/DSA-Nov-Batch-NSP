#include <iostream>
#include <forward_list> // Singly list
using namespace std;

int main(){

	forward_list<int> l;

	// l.push_back(1);
	// l.push_back(2);
	l.push_front(3);
	l.push_front(4);
	l.push_front(5);
	l.push_front(6);
	l.push_front(7);

	for(auto d: l){
		cout << d<<"<-->";
	}
	cout << endl;

	// list<int>::iterator it;
	for(auto it = l.begin() ; it != l.end() ; it++){
		cout << *it << "<-->";
	}
	cout << endl;


	// Deletion at middle
	int pos = 3;
	// list<int>::iterator it = l.begin();
	auto it = l.begin();
	for (int i = 0; i < pos - 1 ; ++i)
	{
		it++;
	}

	// l.erase(it);

	for(auto d: l){
		cout << d<<"<-->";
	}
	cout << endl;


	// Reverse
	l.reverse();
	for(auto d: l){
		cout << d<<"<-->";
	}
	cout << endl;



	return 0;
}
















