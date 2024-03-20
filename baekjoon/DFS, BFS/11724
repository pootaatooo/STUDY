#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int k) {
    visited[k] = true;
    //cout << k << ' ';
    
    for(int i=0;i<graph[k].size();i++) {
        int next = graph[k][i];
        if(!visited[next])
            dfs(next);
    }
    
}

int main() {
    int n, m;
    cin >> n >> m;
    
    graph.resize(n + 1);
    visited.resize(n + 1, false);
    
    for(int i=0;i<m;i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    int cnt = 0;
    
    for(int i=1;i<=n;i++) {
        if(!visited[i]) {
            dfs(i);
            //cout << '\n';
            cnt++;
            
        }
    }
    
    cout << cnt;
    
}

# 모든 노드의 수만큼 연결된 부분을 확인해주고 총 연결 요소의 개수를 dfs함수가 시작될 때마다 카운트 해줌.
