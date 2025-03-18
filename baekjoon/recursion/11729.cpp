#include <iostream>
#include <vector>

using namespace std;

int cnt = 0;
vector<pair<int,int>> v;

void hanoi(int n, int a, int b, int c) { // a는 시작지점 b는 중간지점 c는 도착지점
    cnt++;
    
    if(n == 1) {
        //cout << a << ' ' << c << '\n';
        v.push_back(make_pair(a,c));
    }
    else {
        hanoi(n-1, a, c, b);
        //cout << a << ' ' << c << '\n';
        v.push_back(make_pair(a,c));
        hanoi(n-1, b, a, c);
    }
}

int main() {
    int n;
    cin >> n;
    
    hanoi(n, 1, 2, 3);
    cout << cnt << '\n';
    
    // for(auto it=v.begin(); it!=v.end(); it++) {
    //     cout << it->first << ' ' << it->second << '\n';
    // }
    
    for(int i=0;i<cnt;i++) {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
    
}


c++11 이후에 나온 문법들에 익숙해지려고 공부해야겟다
