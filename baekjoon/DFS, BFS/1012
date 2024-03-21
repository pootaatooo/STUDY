#include <iostream>
#include <queue>

using namespace std;

int m, n, k;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int map[51][51] = {0,};
bool visited[51][51];
int cnt = 0;

void bfs(int x, int y) {
    queue<pair<int,int>> q;
    q.push(make_pair(x, y));
    visited[x][y] = true;
    
    while(!q.empty()) {
        pair<int,int> cur = q.front();
        q.pop();
        
        
        for(int i=0;i<4;i++) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            
            if(nx>=0 && ny>=0 && nx<n && ny<m && !visited[nx][ny] && map[nx][ny] == 1) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
        
    }
    
}

void reset() {
    for(int i=0;i<51;i++) {
        for(int j=0;j<51;j++) {
            map[i][j] = 0;
            cnt = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        cin >> m >> n >> k;
        
        for(int i=0;i<k;i++) {
            int a, b;
            cin >> a >> b;
            map[b][a] = 1;
        }
        
        /*for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cout << map[i][j] << ' ';
            }
            cout << endl;
        }*/
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(map[i][j] == 1 && !visited[i][j]) {
                    bfs(i,j);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
        reset();
    }
}

# 딱히 어렵진 않고 각각 초기화 해주고 주어진 문제의 좌표만 잘 적용시켰으면 금방 풀었을 문제
  아래처럼 reset함수 안쓰고도 가능

#include <iostream>
#include <queue>

using namespace std;

int m, n, k;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

void bfs(int x, int y, bool visited[][51], int map[][51]) {
    queue<pair<int,int>> q;
    q.push({x, y});
    visited[x][y] = true;
    
    while(!q.empty()) {
        pair<int,int> cur = q.front();
        q.pop();
        
        for(int i=0;i<4;i++) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            
            if(nx>=0 && ny>=0 && nx<n && ny<m && !visited[nx][ny] && map[nx][ny] == 1) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        cin >> m >> n >> k;
        
        int map[51][51] = {0,};
        bool visited[51][51] = {false,};
        
        for(int i=0;i<k;i++) {
            int a, b;
            cin >> a >> b;
            map[b][a] = 1;
        }
        
        int cnt = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(map[i][j] == 1 && !visited[i][j]) {
                    bfs(i, j, visited, map);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
}
