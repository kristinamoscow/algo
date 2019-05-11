#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<bool> used(100000);

void dfs(int& v, const vector<vector<int> >& gr){
	used[v] = true;
	for(auto to: gr[v]){
		if(!used[to]){
			dfs(to, gr);
		}
	}
	cout << v << "  ";
}

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
	dfs(start, gr);
	return 0;
}