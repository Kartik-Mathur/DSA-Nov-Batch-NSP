#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <queue>
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

	void bfs(T src){
		
		map<T,bool> visited;
		queue<T> q;

		q.push(src);
		visited[src] = true;

		while(!q.empty()){
			T f = q.front();
			q.pop();

			cout << f << " ";
			visited[f] = true;
			for(auto neighbour: adj[f]){
				if(!visited[neighbour]){
					q.push(neighbour);
					visited[neighbour] = true;
				}
			}
		}
	}


	// SSSP: Single Source Shortest Path Algorithm
	void SSSP(T src){
		
		map<T,T> parent;
		map<T,int> dist;
		map<T,bool> visited;
		queue<T> q;

		q.push(src);
		visited[src] = true;
		parent[src] = src;
		dist[src] = 0;

		while(!q.empty()){
			T f = q.front();
			q.pop();

			visited[f] = true;
			for(auto neighbour: adj[f]){
				if(!visited[neighbour]){
					q.push(neighbour);
					visited[neighbour] = true;
					dist[neighbour] = dist[f] + 1;
					parent[neighbour] = f;
				}
			}
		}



		// Print the distance map to get shortest dist from src for every node
		for(auto p: dist){
			cout << "Distance of "<<src << " to "<< p.first << " : "<<p.second<<endl;
		}
	}

	void printPath(T src, T des){
		
		map<T,T> parent;
		map<T,int> dist;
		map<T,bool> visited;
		queue<T> q;

		q.push(src);
		visited[src] = true;
		parent[src] = src;
		dist[src] = 0;

		while(!q.empty()){
			T f = q.front();
			q.pop();

			visited[f] = true;
			for(auto neighbour: adj[f]){
				if(!visited[neighbour]){
					q.push(neighbour);
					visited[neighbour] = true;
					dist[neighbour] = dist[f] + 1;
					parent[neighbour] = f;
				}
			}
		}

		while(des != parent[des]){
			cout << des << "<--";
			des = parent[des];
		}
		cout << des<<endl;
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

	// g.print();
	g.bfs(1);
	cout << endl;
	g.SSSP(1);
	g.printPath(1,5);


	return 0;
}
















