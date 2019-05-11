#include "dfs.h"

vector<bool> used(100000, false);

void dfs(int& v, const vector<vector<int> >& gr){
	used[v] = true;
	for(auto to: gr[v]){
		if(!used[to]){
			dfs(to, gr);
		}
	}
	cout << v << "  ";
}