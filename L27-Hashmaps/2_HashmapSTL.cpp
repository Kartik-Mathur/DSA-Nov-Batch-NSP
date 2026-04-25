#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

	unordered_map<string, int> h; // STL
	// Inside hashmap we always insert a pair
	pair<string,int> p;

	p.first = "mango";
	p.second = 100;

	h.insert(p);
	h.insert({"apple",150});
	h.insert(make_pair("kiwi",190)); // make_pair is an inbuilt function to create pair

	h["guava"] = 120;

	h.erase("guava");
	// Hashmap ke andar order doesn't matter
	// FOR-EACH Loop to print the hashmap
	// for every pair 'p' belonging to hashmap h
	for(pair<string,int> p: h){
		cout << p.first <<", "<<p.second<<endl;
	}


	return 0;
}
















