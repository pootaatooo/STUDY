#include <iostream>
#include <queue>

using namespace std;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
bool visited[601][601]; //방문여부

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m;
    cin >> n >> m;
    char x[n][m];
    queue<pair<int,int>> q; // 좌표를 저장하는 큐 (int형)
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> x[i][j]; // map생성
            if(x[i][j] == 'I') { // 도연이 자리
                visited[i][j] = true;
                q.push({i, j}); // 좌표 삽입
            }
        }
    }

    int cnt = 0; // 사람을 만난 횟수
    
    while(!q.empty()) {
        //cout << q.front().first << ' ' << q.front().second << '\n';
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++) { // 1.상하좌우 컨트롤
           int nx = cx + dx[i];
           int ny = cy + dy[i];
           
           if(nx >=0 && ny >= 0 && nx < n && ny < m && !visited[nx][ny]) {
               
               if(x[nx][ny] == 'P') cnt++; // 사람 만났을 때 카운트
               else if(x[nx][ny] == 'X') continue; // 벽만났을때 다시 원래자리로 돌아감 
               
               visited[nx][ny] = true; // 벽을 안 만나고 통과하면 방문
               q.push({nx, ny}); // 그자리를 도연이가 있는 자리로 할당(가능한 상하좌우를 큐에 넣음)
           }
           
        }
        
    }
    
    if(cnt != 0) cout << cnt;
    else cout << "TT";

}
=================================================================

#include <iostream>
#include <queue>

using namespace std;

int n, m;
char x[601][601];
bool visited[601][601]; //방문여부
int cnt = 0; // 사람을 만난 횟수
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
queue<pair<char,char>> q;

void bfs() {
    while(!q.empty()) {
        q.pop();
        for(int i=0;i<4;i++) { // 1.상하좌우 컨트롤
           int nx = q.front().first + dx[i];
           int ny = q.front().second + dy[i];
           
           if(nx >=0 && ny >= 0 && nx < n && ny < m && !visited[nx][ny]) {
               
               if(x[nx][ny] == 'P') cnt++; // 사람 만났을 때 카운트
               if(x[nx][ny] == 'X') continue; // 벽만났을때 다시 원래자리로 돌아감 
               
               visited[nx][ny] = true; // 벽을 안 만나고 통과하면 방문
               q.push({nx, ny}); // 그자리를 도연이가 있는 자리로 할당
           }
           
        }
        
    }
    
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> n >> m;
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> x[i][j]; // map생성
            if(x[i][j] == 'I') { // 도연이 자리
                visited[i][j] = true;
                q.push({i, j}); // 좌표 삽입
            }
        }
    }
    
    bfs();
    if(cnt != 0) cout << cnt;
    else cout << "TT";
    
    return 0;
}

# 두개 코드는 동일한 출력을 하지만 두번째 코드를 사용하면 bfs()함수에 캡슐화하여 유지보수에 더 용이함. 
  앞으로의 코드 작성에 함수를 사용해서 푸는 걸 연습!
