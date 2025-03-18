#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int x, y;
    vector<pair<int, int>> v;
    cin >> n;
    
    for(int i=0;i<n;i++) {
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    
    int r[n];
    fill(r,r+n,1);
    
    for(int i=0;i<n;i++) {
        
        for(int j=0;j<n;j++) {
            if(v[i].first < v[j].first && v[i].second < v[j].second) {
                r[i]++;
            }
        }
        
    }
    
    for(int i=0;i<n;i++) {
        cout << r[i] << ' ';
    }
    
    
}

브루트포스 문제. 
int r[n] = {0,} 식이 왜 0으로 초기화가 안되는지 찾아볼것!
