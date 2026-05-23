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
		// for(auto p: dist){
		// 	cout << "Distance of "<<src << " to "<< p.first << " : "<<p.second<<endl;
		// }
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
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17]=-13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice + board[u + dice];
			g.addEdge(u,v,false);
		}
	}

	// g.SSSP(0);
	g.printPath(0,36);

	


	return 0;
}
















