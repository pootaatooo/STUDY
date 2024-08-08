#include <iostream>

using namespace std;

int main() {
    int n;
    int s[6];
    int t, p;
    
    cin >> n;
    
    for(int i=0;i<6;i++) {
        cin >> s[i];
    }
    
    cin >> t >> p;
    int cnt = 0;

    for(int i=0;i<6;i++) {
        cnt += (s[i] / t + (s[i] % t > 0)); 
    }
    
    cout << cnt << endl << n/p << ' ' << n%p << endl;
    
}

#
문제 이해하는데 오래걸림 (s[i] % t > 0) 나머지가 0보다 크면 1, 아니면 0을 이용해서 간편하게 풀이
