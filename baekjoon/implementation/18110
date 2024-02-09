#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    int opnion[n] = {0,};
    double sum = 0;
    
    if(n == 0) {  // 0이 입력되었을 때 예외처리
        cout << n;
        return 0; 
    }
    
    for(int i=0;i<n;i++) {
        cin >> opnion[i];
    }
  
    sort(opnion,opnion+n);

    double average = round(n*0.15);
    
    for(int i=0;i<average;i++) {
        opnion[i] = 0;
        opnion[n-i-1] = 0;  //-1해야지 배열 마지막 값을 가르킴 
    }
    
    for(int i=0;i<n;i++) {
        sum += opnion[i];
        //cout << opnion[i] << endl;
    }
    
    cout << round(sum / (n - average*2)) << endl;
    
}

# 반올림 해주고 각각 알맞는 자료형도 선언해주고 절사평균의 값 만큼 배열의 양끝을 0으로 만들어줌으로서 나머지 값을 더한 값과
  그 횟수를 나눠줌

