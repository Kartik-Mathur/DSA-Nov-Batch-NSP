#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
using namespace std;

template<typename T>
class Graph{
	map< T, list <T> > adj;
public:

	void addEdge(T u,T v, bool bidir = true){
		adj[u].push_back(v);
		if(bidir){
			adj[v].push_back(u);
		}
	}

	void print(){
		for (auto p: adj)
		{
			cout << p.first << " : ";
			for(auto neighbour: p.second){
				cout << neighbour<<", ";
			}
			cout << endl;
		}
	}

	void tpsHelper(T src, list<T> &l, unordered_map<T, bool> &visited){

		visited[src] = true;
		// Pehle bacho ko list mei insert kardo
		for(auto children: adj[src]){
			if(!visited[children]){
				tpsHelper(children, l, visited);
			}
		}

		// saare bacho ko list mei store kar diya unka kaam pehle krna hai
		// ab sabse aage src ko daaldo kyunki saare bacho issi ke upr dependent h
		// toh isse sabse pehle krna is important
		l.push_front(src);
	}


	void tps(){
		list<T> l;
		unordered_map<T, bool> visited;

		for(auto p: adj){
			if(!visited[p.first]){
				tpsHelper(p.first,l, visited);
			}
		}

		for(auto d: l){
			cout << d << " ";
		}
		cout << endl;
	}


};

int main(){

	Graph<string> g;

	g.addEdge("Hindi","Maths",false);
	g.addEdge("English","Maths",false);
	g.addEdge("Maths","ML",false);
	g.addEdge("Maths","C++",false);
	g.addEdge("C++","Web",false);
	g.addEdge("Web","Job",false);
	g.addEdge("ML","Job",false);

	g.tps();
	

	


	return 0;
}
















