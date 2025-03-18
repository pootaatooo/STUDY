#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};


int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    char x[n][m];   // 미로
    int z[n][m];      // 방문여부
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> x[i][j];
            z[i][j] = 0; 
        }
    }
    
    queue<pair<int,int>> q;  // 탐색 순서 (큐에 들어간 순서대로 판단함)
    
    q.push(make_pair(0,0));
    z[0][0] = 1;
    
    while(!q.empty()) {
        pair<int,int> cur = q.front(); 
        q.pop();
        
        for(int i=0;i<4;i++) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) 
                continue;
            if(x[nx][ny] != '1' || z[nx][ny] > 0) //최단경로
                continue;
                
            z[nx][ny] = z[cur.first][cur.second] + 1;

            q.push({nx, ny});
        }
        
    }
    
    cout << z[n-1][m-1];
}

BFS 너비우선탐색을 이용했다. 
queue와 pair에 어떤인수가 할당되는지 더 자세하게 공부해야되겠다.

fill(z[0], z[0] + n * m, 0);
이렇게 z배열을 초기화 하는 방법을
for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
        cin >> x[i][j];
        z[i][j] = 0; 
    }
}
이런식으로 입력받으면서 자연스럽게 초기화 시켜주는 방법도 있다.
창의성이 필요해
  
