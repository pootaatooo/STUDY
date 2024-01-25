#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    vector<int> re(n+1);
    
    for(int i=1;i<=n;i++) {
        cin >> v[i];
    }
    
    re[1] = v[1];
    re[2] = v[1]+v[2];
    re[3] = max(v[1]+v[3],v[2]+v[3]);
    
    for(int i=4;i<=n;i++) {
        re[i] = max(re[i-2]+v[i],re[i-3]+v[i-1]+v[i]);
    }
    
    cout << re[n];
}

위와같이 문제형식 파악 후 dp로 나올 수 있는 재귀형식, 지금문제와 같은 최대값을 이용한 dp를
익혀두자
