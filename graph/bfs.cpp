#include "bfs.h"

vector<bool> usedq(100000, false);

void bfs(int& v, const vector<vector<int> >& gr){
	queue<int> q;
	q.push(v);
	usedq[v] = true;
	while(!q.empty()){
		v = q.front();
		cout << v << "  ";
		q.pop();
		for(auto to: gr[v]){
			if(!usedq[to]){
				q.push(to);
				usedq[to] = true;
			}
		}
	}

}
