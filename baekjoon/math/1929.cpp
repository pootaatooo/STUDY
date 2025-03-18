#include <iostream>
#include <cmath>

using namespace std;

void PrimeNumberSieve(int m, int n) {
    
    int a[n+1];
    
    a[0] = 0; // 0은 입력부분에 없긴하지만 소수가 아님
    a[1] = 0; // 1도 소수가 아님, 입력값에 1이 나오는 경우도 예외처리 !!
    
    for(int i=2;i<=n;i++) { // 배열 초기화
        a[i] = i;
    }
    
    for(int i=2;i*i<=n;i++) { // 에라토스테네스의 체 알고리즘. =(int i=2;i<=sqrt(n);i++)
        if(a[i] == 0) continue;
        
        for(int j=i*2;j<=n;j+=i) { // i의 배수를 지운다.
            a[j] = 0;
        }
    }
    
    for(int i=m;i<=n;i++) {  // 출력부분을 시작값과 끝값으로 범위 설정
        if(a[i] != 0) cout << a[i] << '\n'; // 0이 아니면 출력
    }  // 소수가 아닌 부분은 모두 0이 되므로 나머지는 모두 소수가 출력 됨
    
}


int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int m, n;
    cin >> m >> n;
    
    
    PrimeNumberSieve(m, n);
    return 0;
}
