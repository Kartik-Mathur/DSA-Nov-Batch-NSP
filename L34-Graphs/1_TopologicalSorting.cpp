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


	void khansAlgorithm(){
		unordered_map<T, int> indegree;
		queue<T> q;

		for(auto p: adj){
			for(auto neighbour: p.second){
				if(indegree.count(neighbour) == 0){
					indegree[neighbour] = 0;
				}
				indegree[neighbour]++;
			}
		}

		for(auto p: adj){
			if(indegree.count(p.first) == 0){
				q.push(p.first);
			}
		}

		while(!q.empty()){
			T x = q.front();
			q.pop();
			cout << x<<" ";
			for(auto neighbour: adj[x]){
				indegree[neighbour] --;
				if(indegree[neighbour] == 0){
					q.push(neighbour);
				}
			}
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

	g.khansAlgorithm();
	

	


	return 0;
}
















