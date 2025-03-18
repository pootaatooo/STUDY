#include <iostream>

using namespace std;

int com, link;
int network[101][101] = {0,};
bool check[101];
int cnt = 0;

void dfs(int k) {
    check[k] = true;
    
    for(int i=1;i<=com;i++) {
        if(!check[i] && network[k][i] == 1) {
            cnt++;
            dfs(i);
        }
    }
    
}

int main() {
    cin >> com >> link;
    
    for(int i=0;i<link;i++) {
        int a, b;
        cin >> a >> b;
        network[a][b] = 1;
        network[b][a] = 1;
    }
    
    dfs(1);
    cout << cnt;
}

# dfs 풀이

#include <iostream>
#include <queue>

using namespace std;

int com, link;
int network[101][101] = {0,};
bool check[101];
int cnt = 0;
queue<int> q;

void bfs(int k) {
    q.push(k);
    
    while(!q.empty()) {
        k = q.front();
        q.pop();
        
        for(int i=1;i<=com;i++) {
            if(!check[i] && network[k][i] == 1) {
                check[i] = true;
                q.push(i);
                cnt++;
            }
        }
    }
    
}

int main() {
    cin >> com >> link;
    
    for(int i=0;i<link;i++) {
        int a, b;
        cin >> a >> b;
        network[a][b] = 1;
        network[b][a] = 1;
    }
    
    check[1] = true;
    bfs(1);
    cout << cnt;
}

# bfs 풀이

## dfs, bfs의 장단점을 잘 파악하고 보통 표준적으로 많이 쓰는 함수 외우기
