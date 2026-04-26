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
	h["Pineapple"] = 120;
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


	// To print the entire hashtable with indexes
	for (int i = 0; i < h.bucket_count(); ++i)
	{
		cout << i <<" : ";

		for(auto p = h.begin(i); p != h.end(i) ; p++){
			cout << "("<<p->first <<", "<<p->second<<") ";
		}


		cout << endl;
	}

	return 0;
}
















