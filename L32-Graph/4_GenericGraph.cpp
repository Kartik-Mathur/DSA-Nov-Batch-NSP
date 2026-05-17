#include <iostream>
#include <list>
#include <vector>
#include <map>
using namespace std;

class Graph{
	map< string, list <string> > adj;
public:

	void addEdge(string u,string v,
		bool bidir = true){
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

};

int main(){

	Graph g;

	g.addEdge("Modi","Trump", true);
	g.addEdge("Putin","Trump", false);
	g.addEdge("Putin","Modi", false);
	g.addEdge("Putin","Pope", false);
	g.addEdge("Prabhu","Modi", false);
	g.addEdge("Yogi","Modi", true);
	g.addEdge("Yogi","Prabhu", false);

	g.print();


	return 0;
}
















