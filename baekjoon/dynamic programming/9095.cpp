1. 반복문
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    vector<int>v;
    
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    
    for(int j=4;j<=11;j++) {
        v.push_back(v[j-3]+v[j-2]+v[j-1]);
    }
    
    for(int i=0;i<t;i++) {
        cin >> n;
        cout << v[n] << endl;
    }
    
}



