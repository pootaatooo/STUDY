#include <iostream>
#include <map>
#include <cctype>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m;
    cin >> n >> m;
    map<string,int>map1;
    map<int,string>map2;
    string s[n+1];
    string a[m];
    
    for(int i=1;i<=n;i++) {
        cin >> s[i];
        map1.insert({s[i],i});
        map2.insert({i,s[i]});
    }
    
    for(int j=0;j<m;j++) {
        cin >> a[j];
        if(isdigit(a[j][0])) {
            cout << map2[stoi(a[j])] << '\n';
        }
        else
            cout << map1[a[j]] << '\n';
    }

}

맵 공부했다. 맵쓰면 훨씬 간결하게 풀수있다.
isdigit()함수를 써서 숫자인지 판별 후에 숫자면 map2를 써서 문자열로 출력
아니면 map1을 써서 숫자로 출력해줬다.
a[j][0]은 문자열의 가장 첫부분 즉 문자부분으로만 판별이 되서 저래 해줌
