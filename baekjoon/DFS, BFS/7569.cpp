#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int m, n, h;

int dz[6] = {0,0,0,0,1,-1}; // 앞, 뒤, 좌, 우, 상, 하
int dx[6] = {-1,1,0,0,0,0};
int dy[6] = {0,0,-1,1,0,0};


int toma[101][101][101];
bool check[101][101][101] = {false,};

int bfs() {
    queue<tuple<int,int,int>> q; // 면, 행, 열 순서대로
    
    for(int l=0;l<h;l++) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(toma[l][i][j] == 1 && !check[l][i][j]) { 
                    q.push({l,i,j}); // 먼저 익은 토마토의 좌표를 q에 넣어줌 (3개 반환값일 땐 {}사용)
                    check[l][i][j] = true;
                }
            }
        }
    }
    
    int days = 0;
    
    while(!q.empty()) {
        int z = q.size(); // 큐 사이즈가 변경되므로 변수에 저장을 미리 해줌
        
        for(int k=0;k<z;k++) { // point! 현재 맵에 1인 개수를 세서 먼저 그 부분들에 대해 확인을 해줌
            tuple<int,int,int> cur = q.front();
            q.pop();
            
            for(int i=0;i<6;i++) { // 위, 아래, 앞, 뒤, 좌, 우 = 6번
                
                int nz = get<0>(cur) + dz[i];
                int nx = get<1>(cur) + dx[i];
                int ny = get<2>(cur) + dy[i];
                
                
                if(nx>=0 && ny>=0 && nz >= 0 && nz<h && nx<n && ny<m && !check[nz][nx][ny] && toma[nz][nx][ny] == 0) {
                    q.push({nz,nx,ny});
                    toma[nz][nx][ny] = 1;
                    check[nz][nx][ny] = true;
                    // cout << nz << ' ' << nx << ' ' << ny << endl;
                }
            }
        }
        days++;
    }
    
    for(int l=0;l<h;l++) { // 익지않은 토마토가 있는지 판별
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(toma[l][i][j] == 0) { 
                    return -1;
                }
            }
        }
    }
    
    return days - 1;

}

int main() {
    cin >> m >> n >> h;
    
    for(int l=0;l<h;l++) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cin >> toma[l][i][j]; // 토마토 입력
            }
        }
    }
    
    int result = bfs();

    cout << result;
    
}
