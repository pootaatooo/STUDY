#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    unordered_map<string,string>w;
    
    string loc[n];
    string pass[n];
    string res[m];
    
    for(int i=0;i<n;i++) {
        cin >> loc[i] >> pass[i];
        w.insert({loc[i],pass[i]});
    }
    
    for(int i=0;i<m;i++) {
        cin >> res[i];
        if(w.find(res[i]) != w.end())
            cout << w[res[i]] << '\n';
    }
    

}
