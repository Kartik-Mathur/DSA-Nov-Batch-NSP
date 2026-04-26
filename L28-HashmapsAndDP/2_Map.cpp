#include <iostream>
#include <map>
using namespace std;

int main(){
	// ordered_map
	map<string, int> h; // STL -> O(logN), Redblack tree internally

	// Inside hashmap we always insert a pair
	pair<string,int> p;

	p.first = "mango";
	p.second = 100;

	h.insert(p);
	h.insert({"apple",150});
	h.insert(make_pair("kiwi",190)); // make_pair is an inbuilt function to create pair

	h["guava"] = 120;
	h["pineapple"] = 120;
	h["orange"] = 120;

	// h.erase("guava");
	// Hashmap ke andar order doesn't matter
	// FOR-EACH Loop to print the hashmap
	// for every pair 'p' belonging to hashmap h
	for(pair<string,int> p: h){
		cout << p.first <<", "<<p.second<<endl;
	}

	//If we need only value use this loop
	for(auto p: h){
		cout << p.first <<", "<<p.second<<endl;
	}

	auto a = 10;
	cout << a<<endl;




	return 0;
}
















