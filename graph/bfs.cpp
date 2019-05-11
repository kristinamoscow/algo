#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int& v, const vector<vector<int> >& gr){
	vector<bool> used(gr.size());
	queue<int> q;
	q.push(v);
	used[v] = true;
	while(!q.empty()){
		v = q.front();
		cout << v << "  ";
		q.pop();
		for(auto to: gr[v]){
			if(!used[to]){
				q.push(to);
				used[to] = true;
			}
		}
	}

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
	bfs(start, gr);
	return 0;
}