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

	bool helper(T src, int color, unordered_map<T, int> &colorMap){
		colorMap[src] = color;

		for(auto children: adj[src]){
			if(colorMap[children] == -1){
				if(!helper(children, 1 - color, colorMap)){
					return false;
				}
			}
			else if(colorMap[children] == color){
				return false;
			}
		}

		return true;
	}


	bool isbipartite(){
		unordered_map<T, int> colorMap;
		for(auto p: adj){
			colorMap[p.first] = -1;
		}

		for(auto p: adj){
			if(colorMap[p.first] == -1){
				bool ans = helper(p.first, 1, colorMap);
				if(ans == false) return false;
			}
		}

		return true;
	}


};

int main(){

	Graph<string> g;

	g.addEdge("A","B");
	g.addEdge("A","C");
	g.addEdge("B","D");
	g.addEdge("C","D");
	// g.addEdge("E","D");
	// g.addEdge("E","C");

	if(g.isbipartite()) cout << "Yes\n";
	else cout << "No\n";
	

	


	return 0;
}
















