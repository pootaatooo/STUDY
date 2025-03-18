1. vector 사용
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    int x;
    vector<int>v;
    
    for(int i=0;i<n;i++) {
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end(),greater<>());
    
    int cnt = 0;
    int i = 0;
    
    while(k != 0) {
        if(k - v[i] >= 0) {
            k -= v[i];
            cnt++;
        }
        else
            i++;
    }

    cout << cnt;
    
}



2. 배열사용
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    int v[n+1];
    
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    
    sort(v,v+n,greater<int>());
    
    int cnt = 0;
    int i = 0;
    
    while(k != 0) {
        
        if(k - v[i] >= 0) {
            k -= v[i];
            cnt++;
        }
        else
            i++;
    }
    
    
    cout << cnt;
    
}

우선 i값 초기화에 신경써준다. while문 안에 있으면 i는 계속 0이 된다는 점
또 필요없는 if문이 있는지 없는지 자세히 검산해봐야됨
아이디어 구현은 굉장히 좋았다!!
