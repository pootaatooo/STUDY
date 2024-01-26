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
    
    re[0] = v[0] = 0;
    re[1] = v[1];
    re[2] = v[1]+v[2];
    
    for(int i=3;i<=n;i++) {

        re[i] = max(max(re[i - 3] + v[i - 1] + v[i], re[i - 2] + v[i]), re[i - 1]);
        
    }
        
    
    // for(int i=0;i<=n;i++) {
    //     cout << v[i] << ' ' << re[i] << endl;
    // }
    
    cout << re[n];
}

max 함수 사용법 숙지, 마지막 잔을 꼭 안마셔도 됨
