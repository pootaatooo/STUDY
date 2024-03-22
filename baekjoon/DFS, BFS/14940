#include <iostream>
#include <queue>

using namespace std;

int n, m;
int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};
int map[1001][1001];
int cnt[1001][1001] = {0,}; // 여기 거리를 저장해줌
bool visited[1001][1001];

int u, v;

typedef pair<int,int> pii;

void bfs(int x, int y) { // x,y는 목표지점의 좌표
    queue<pii> q;
    q.push({x,y});
    visited[x][y] = true;
            
        while(!q.empty()) {
            pii cur = q.front();
            q.pop();
            
            for(int i=0;i<4;i++) {
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];
            
                if(nx>=0 && ny>=0 && nx<n && ny<m && !visited[nx][ny] && map[nx][ny] == 1) {
                    visited[nx][ny] = true;
                    q.push({nx,ny});
                    cnt[nx][ny] = cnt[cur.first][cur.second]+1; // point! cnt[nx][ny]++은 방문한 횟수를 나타냄
                }                                              // 위같은 방법으로 멀어질수록 1을 더하는식으로 계산 
            }
        }
        
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> n >> m;
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> map[i][j];
            if(map[i][j] == 2) { // 도착지점의 좌표 구하기
                u = i;
                v = j;
            }
        }
    }
    
    bfs(u, v); // 목표지점을 인수로 보내줌
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(visited[i][j] == false && map[i][j] == 1) // 도달하지 못한 공간이 있는경우
                cnt[i][j] = -1;
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << cnt[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
