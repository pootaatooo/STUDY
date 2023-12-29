#include <iostream>

using namespace std;

int main() {
    int a[5][5]; // 빙고판
    int cnt = 0; // 사회자가 부른 횟수 , 즉 빙고판에서 0으로 초기화 된 수
    int bingo = 0; // 한줄이 모두 0이되었을때 카운트
    
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cin >> a[i][j];
        }
    }
    
    int b[25];   // 사회자가 말하는수
    
    for(int i=0;i<25;i++) {
        cin >> b[i];
    }
    
    int x = -1;
    
    while(bingo < 3) {
        x++;
        bingo=0;
        for(int i=0;i<5;i++) {
            for(int j=0;j<5;j++) {
                if(b[x] == a[i][j]) {
                    a[i][j] = 0;
                    cnt++;
                }
            }
        }

        for(int i=0;i<5;i++) {
            if(a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0 && a[i][3] == 0 && a[i][4] == 0) {
                bingo++;
            }
            
            if(a[0][i] == 0 && a[1][i] == 0 && a[2][i] == 0 && a[3][i] == 0 && a[4][i] == 0) {
                bingo++;
            }
        }
        
        
        if(a[0][0] == 0 && a[1][1] == 0 && a[2][2] == 0 && a[3][3] == 0 && a[4][4] == 0) {
            bingo++;
        }
        
        if(a[0][4] == 0 && a[1][3] == 0 && a[2][2] == 0 && a[3][1] == 0 && a[4][0] == 0) {
            bingo++;
        }
        
   }
   cout << cnt;
   
   return 0;

}

*** 문제 푸는 알고리즘 생각할 때 변수 초기화가 어떻게 되는지, 정확한 값에 매칭이 되는지 확인할 것
내 머릿 속으로 하나씩 변수 바꿔가며 풀이해볼 것
