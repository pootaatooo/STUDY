#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    map<string,int> map1;
    vector<string>v;
    
    for(int i=0;i<n;i++) {
        string s;
        cin >> s;
        map1.insert({s,0});
    }
    
    for(int i=0;i<m;i++) {
        string s;
        cin >> s;
        if(map1.count(s)) {
            v.push_back(s);
        }
    }
    
    cout << v.size() << '\n';
    
    sort(v.begin(),v.end());
    
    for(int i=0;i<(int)v.size();i++) {
        cout << v[i] << '\n';
    }
    
}
