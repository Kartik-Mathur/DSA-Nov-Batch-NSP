#include <iostream>
#include <list>
#include <vector>
#include <map>
using namespace std;

template<typename T>
class Graph{
	map< T, list <T> > adj;
public:

	void addEdge(T u,T v,
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

	void dfsHelper(T src, map<T, bool> &visited){
		cout << src << " ";
		visited[src] = true;

		for(auto ch : adj[src]){
			if(!visited[ch]){
				dfsHelper(ch, visited);
			}
		}
	}

	void dfs(T src){
		map<T, bool> visited;
		int component = 1;
		dfsHelper(src, visited);

		for(auto p: adj){
			if(!visited[p.first]){
				component++;
				dfsHelper(p.first, visited);
			}
		}

		cout << "\nTotal components: "<<component<<endl;

	}



};

int main(){

	Graph<int> g;

	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(3,4);
	g.addEdge(1,2);
	g.addEdge(3,2);
	g.addEdge(4,2);
	g.addEdge(3,5);
	g.addEdge(6,7);

	g.dfs(1);


	return 0;
}
















