#include <iostream>
using namespace std;

class dsu{
public:
	vector<int> parent, size;

	dsu(int n){
		parent.resize(n+1);
		size.resize(n+1);
		for (int i = 0; i <= n; ++i)
		{
			parent[i] = i;
			size[i] = 1;
		}
	}

	int get(int u){
		if(u == parent[u]) return u;

		// Path compression
		return parent[u] = get(parent[u]);
	}

	void union_set(int u,int v){
		int leader_u = get(u);
		int leader_v = get(v);

		if(leader_u == leader_v) return;
		if(size[leader_v] > size[leader_u]) {
			swap(leader_u, leader_v);
		}
		
		parent[leader_v] = leader_u;
		size[leader_u] += size[leader_v];
	}


};

bool compare(vector<int> &a, vector<int> &b){
	return a[0] < b[0];
}

int main(){
	
	vector<vector<int> > adj = {
		{1, 1, 2},
		{1, 2, 6},
		{2, 2, 3},
		{4, 1, 4},
		{3, 3, 4},
		{2, 4, 5},
		{1, 3, 5}
	};

	sort(adj.begin(), adj.end(), compare);

	dsu d(6);
	int ans = 0;
	for(int i = 0 ; i < adj.size(); i++){
		int wt = adj[i][0];
		int u = adj[i][1];
		int v = adj[i][2];

		int leader_u = d.get(u);
		int leader_v = d.get(v);

		if(leader_u != leader_v){
			ans += wt;
			d.union_set(leader_u, leader_v);
		}
	}

	cout << ans << endl;

	return 0;
}
















