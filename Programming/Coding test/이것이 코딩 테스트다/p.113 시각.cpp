#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    
    for(int i=0;i<n+1;i++) {
        
        for(int j=0;j<60;j++) {
            
            for(int k=0;k<60;k++) {
                if((k / 10 == 3 || k % 10 == 3) || (j / 10 == 3 || j % 10 == 3) || (i / 10 == 3 || i % 10 == 3)) {
                    cnt++;
                }
            }
        }
    }
    
    cout << cnt << endl;
}

3이 하나라도 포함되는 모든 경우의 수 출력
- 3중 for문으로 시, 분, 초 카운트 범위 생성
- if문으로 3이나오는 경우 카운트해줌
답 https://github.com/ndb796/python-for-coding-test/blob/master/4/2.cpp
