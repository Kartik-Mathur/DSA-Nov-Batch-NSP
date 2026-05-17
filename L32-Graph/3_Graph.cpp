#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Graph{
	vector< list <int> > adj;
public:

	Graph(int N){
		adj.resize(N);
	}

	void addEdge(int u,int v,bool bidir = true){
		adj[u].push_back(v);
		if(bidir){
			adj[v].push_back(u);
		}
	}

	void print(){
		for (int i = 0; i < adj.size(); ++i)
		{
			cout << i << " : ";
			for(auto neighbour: adj[i]){
				cout << neighbour<<", ";
			}
			cout << endl;
		}
	}

};

int main(){

	Graph g(5);

	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(1,4);
	g.addEdge(1,3);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);

	g.print();


	return 0;
}
















