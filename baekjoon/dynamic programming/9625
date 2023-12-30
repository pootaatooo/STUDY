#include <iostream>
#include <vector>

using namespace std;

int main() {
    int k;
    cin >> k;
    
    vector<pair<int, int>> v(46);
    v[1].first = 0;
    v[1].second = 1;
    v[2].first = 1;
    v[2].second = 1;
    
    for(int i=3;i<=k;i++) {
        v[i].first = v[i-1].first + v[i-2].first;
        v[i].second = v[i-1].second + v[i-2].second;
    }
    
    cout << v[k].first << ' ' << v[k].second;
    
}

dp문제는 규칙 찾는게 최우선인듯하다. 하나씩 대입해보고 규칙을 찾고 그에 맞게 출력을 해줬다.
pair class, vector stl연습도 슬슬 해볼 때가 된 거 같다.
두달안에 골드 찍자
