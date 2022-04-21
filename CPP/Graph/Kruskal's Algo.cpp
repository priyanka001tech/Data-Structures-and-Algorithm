#include <bits/stdc++.h>
using namespace std;
// DSU data structure
// path compression + rank by union

class DSU {
	int* parent;
	int* rank;

public:
	DSU(int n)
	{
		parent = new int[n];
		rank = new int[n];

		for (int i = 0; i < n; i++) {
			parent[i] = -1;
			rank[i] = 1;
		}
	}

	// Find function
	int find(int i)
	{
		if (parent[i] == -1)
			return i;

		return parent[i] = find(parent[i]);
	}
	// union function
	void unite(int x, int y)
	{
		int s1 = find(x);
		int s2 = find(y);

		if (s1 != s2) {
			if (rank[s1] < rank[s2]) {
				parent[s1] = s2;
				rank[s2] += rank[s1];
			}
			else {
				parent[s2] = s1;
				rank[s1] += rank[s2];
			}
		}
	}
};

class Graph {
	vector<vector<int> > edgelist;
	int V;

public:
	Graph(int V) { this->V = V; }

	void addEdge(int x, int y, int w)
	{
		edgelist.push_back({ w, x, y });
	}

	void kruskals_mst()
	{
		// 1. Sort all edges
		sort(edgelist.begin(), edgelist.end());

		// Initialize the DSU
		DSU s(V);
		int ans = 0;
		cout << "Following are the edges in the "
				"constructed MST"
			<< endl;
		for (auto edge : edgelist) {
			int w = edge[0];
			int x = edge[1];
			int y = edge[2];

			// take that edge in MST if it does form a cycle
			if (s.find(x) != s.find(y)) {
				s.unite(x, y);
				ans += w;
				cout << char(x+65) << " -- " << char(y+65) << " == " << w
					<< endl;
			}
		}
		cout << "Minimum Cost Spanning Tree: " << ans;
	}
};

int main()
{

	int n, m;
	cin >> n >> m;

	Graph g(n);
	for (int i = 0; i < m; i++)
	{
	     char x, y;
		 int w;
		 cin >> x >> y >> w;
		 x-=65;
		 y-=65;
		 g.addEdge(x, y, w);
	}

	g.kruskals_mst();
	return 0;
}
