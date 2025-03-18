#include <iostream>

using namespace std;

int main() {
    int n, l, d;
    cin >> n >> l >> d;
    
    int res = 0;
    
    while(n--) {
        res += l;
        for(int i=0;i<5;i++) {
            if(res % d == 0) {
                cout << res;
                return 0;
            }
            res++;
        }
    }
    
    if (res%d)
        cout << (res / d + 1)*d;
    else
        cout << res;
    
    
}

구간으로 풀거나 증감으로 푼다 개ㅐ어렵다
