#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m, b;
    cin >> n >> m >> b;
    int map[501][501]; // 어차피 n*m크기만 입력받고 그부분만 읽을거라서 초기화 필요없음
    
    int minTime = 1e9; // 최대시간을 지정해놓고 계속 최소 시간을 갱신해줌
    int High = 0; // 가장 높은 땅
    
    int minHeight = 1000; // 가장 높은 땅높이가 256이므로 적당히 높은 값과 비교
    int maxHeight = 0; // 가장 낮은 땅높이가 0이므로 적당히 낮은 값과 비교
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> map[i][j];
            minHeight = min(minHeight, map[i][j]); // 맵의 가장 낮은 땅
            maxHeight = max(maxHeight, map[i][j]); // 맵의 가장 높은 땅
        }
    }
    //cout << minHeight << ' ' << maxHeight << endl;
    
    for(int i=minHeight;i<=maxHeight;i++) {
        int build = 0; // 파거나 쌓는데 걸리는 시간
        int inventory = b; // 블럭개수
        
        for(int j=0;j<n;j++) {
            
            for(int k=0;k<m;k++) {
                if(map[j][k] > i) { // 땅파기
                    build += (map[j][k] - i) * 2;
                    inventory += (map[j][k] - i);
                }
                else {   // 땅쌓기(같을때는 continue를 굳이 안해줘도 0만 나오니까 상관없음)
                    build += (i - map[j][k]);
                    inventory -= (i - map[j][k]);
                }
            }
        }
        
        if(inventory >= 0 && build <= minTime) {
            minTime = build;
            High = i; // 가장 적은 시간이 걸리는 경우의 땅의 높이
        } 

    }
    cout << minTime << ' ' << High << '\n';
    
    
}
