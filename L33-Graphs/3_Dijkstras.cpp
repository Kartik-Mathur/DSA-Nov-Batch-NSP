#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <queue>
#include <set>
using namespace std;

template<typename T>
class Graph{
	map< T, list <pair<T,int > > > adj;
public:

	void addEdge(T u,T v,int d, bool bidir = true){
		adj[u].push_back({v,d});
		if(bidir){
			adj[v].push_back({u,d});
		}
	}

	void print(){
		for (auto p: adj)
		{
			cout << p.first << " : ";
			for(auto childP: p.second){
				cout << "(" << childP.first << ", "<< childP.second <<") ";
			}
			cout << endl;
		}
	}

	void dijkstras(T src, T des){
		map<T,T> parent;
		map<T,int> distance;

		for(auto p: adj){
			distance[p.first] = INT_MAX;
		}

		set< pair<int, T> > s;

		distance[src] = 0;
		parent[src] = src;

		s.insert({0, src});

		while(!s.empty()){
			auto f = *(s.begin());
			s.erase(s.begin());
			int cd = f.first;
			T x = f.second;

			for(auto p: adj[x]){
				T neighbour = p.first;
				int edgeD = p.second;

				if(cd + edgeD < distance[neighbour]){
					auto t = s.find({distance[neighbour], neighbour});
					if(t != s.end()) s.erase(t);

					s.insert({cd + edgeD, neighbour});
					parent[neighbour] = x;
					distance[neighbour] = cd + edgeD;
				}
			}

		}

		for(auto p: distance){
			cout << "Distance of "<<p.first<<" from "<< src <<8" : "<< p.second << endl;
		}

		while(des != parent[des]){
			cout << des << "<--";
			des = parent[des];
		}
		cout << des<<endl;

	}


};

int main(){

	Graph<string> g;
	g.addEdge("A", "B", 1);
	g.addEdge("A", "C", 5);
	g.addEdge("A", "D", 7);
	g.addEdge("B", "C", 2);
	g.addEdge("D", "C", 3);

	g.print();
	g.dijkstras("A","D");


	return 0;
}
















