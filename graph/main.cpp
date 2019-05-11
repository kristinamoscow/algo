#include "general.h"
#include "bfs.h"
#include "dfs.h"

int main(){
	int n, m, u, v;
	cin >> n >> m; 	
	vector<vector<int> > gr(n + 1);
	for(int i = 0; i < m; i++){
		cin >> u >> v;
		gr[u].push_back(v);
		gr[v].push_back(u);
	}
	int start = 0;
	cout << "BFS:\n";
	bfs(start, gr);
	start = 0;
	cout << "\nDFS:\n";
	dfs(start, gr);
	return 0;
}