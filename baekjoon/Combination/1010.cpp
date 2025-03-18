#include <iostream>

using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    
    while(t--) {
        cin >> n >> m;
        
        long long result = 1;
        int tmp = 0;
        
        for(int i=m; i>m-n;i--) {
            result = result * i;
            result = result / tmp++;
        }
        cout << result << '\n';
    }
    
}
