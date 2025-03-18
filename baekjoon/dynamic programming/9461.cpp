# 처음 내가 푼 코드

#include <iostream>

using namespace std;

long long dp[101];

void pado(int n) {
    
    for(int i=4;i<=n;i++) {
        dp[i] = dp[i-2] + dp[i-3];   
    }
    cout << dp[n] << '\n';
}


int main() {
    int t;
    cin >> t;
    int n;
    
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    
    for(int i=0;i<t;i++) {
        cin >> n;
        pado(n);
    }

}

# 원호형이 개뭐라해서 바꾼코드
#include <iostream>

using namespace std;

long long dp[101];


int main() {
    int t;
    cin >> t;
    int n;
    
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    
    for(int i=4;i<101;i++) {
        dp[i] = dp[i-3] + dp[i-2];
    }
    
    for(int i=0;i<t;i++) {
        cin >> n;
        cout << dp[n] << '\n';
    }

}
// 차이점은 1번코드는 dp함수를 두번씩 돌리는 번거러움을 2번코드에서 모든 경우의 수인 1~100까지의 수를 한번 싹 구해놓은 다음
입력 받은 값만 출력시켜줌. 값이 커질 때는 시간이 훨씬 단축된다.
