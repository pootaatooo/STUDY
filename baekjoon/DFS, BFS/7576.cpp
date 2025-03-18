#include <iostream>
#include <queue>

using namespace std;

int m, n;
int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};
int toma[1001][1001];
bool check[1001][1001] = {false,};

int bfs() {
    queue<pair<int,int>> q;
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(toma[i][j] == 1 && !check[i][j]) { 
                q.push(make_pair(i,j)); // 먼저 익은 토마토의 좌표를 q에 넣어줌
                check[i][j] = true; // 그부분들은 체크
            }
        }
    }
    
    int days = 0;
    
    while(!q.empty()) {
        int z = q.size(); // 큐 사이즈가 변경되므로 변수에 저장을 미리 해줌
        
        for(int k=0;k<z;k++) { // point! 현재 맵에 1인 개수를 세서 먼저 그 부분들에 대해 확인을 해줌
            pair<int,int> cur = q.front();
            q.pop();
            
            for(int i=0;i<4;i++) {
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];
                
                if(nx>=0 && ny>=0 && nx<n && ny<m && !check[nx][ny] && toma[nx][ny] == 0) {
                    q.push({nx,ny});
                    toma[nx][ny] = 1;
                    check[nx][ny] = true;
                    
                }
            }
        }
        days++;
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(toma[i][j] == 0) { 
                return -1;
            }
        }
    }
    
    return days - 1;

}

int main() {
    cin >> m >> n;
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> toma[i][j]; // 토마토 입력
        }
    }
    
    int result = bfs();

    cout << result;
    
}

# bfs를 실행할 때 현재 q에 저장되어있는 노드들의 횟수만큼 반복하는 부분이 중요함 (29번 줄)
