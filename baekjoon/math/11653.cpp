#include <iostream>
using namespace std;

int yout(int a) {
    for(int i = 2; i*i <= a; i++) {
        if(a % i == 0)  return 0;
    }
    return a;
}

int main() {
    int n;
    int so;
    cin >> n;
    
    if(n == 1)
        return 0;
    
    for(int i = 2; i < n; i++) {
        
        if(yout(i) != 0)
            so = yout(i);
        
       !!!!! if(n % so == 0) {
            cout << so << '\n';
        }
        
    }
    
}


######

소인수분해 : n이라는 수를 가장 작은 소수로 1이 될때까지 나누어 주는 것.
1. 가장 작은 소수를 구해야함 ( 2 3 5 7 ...)
2. n을 위의 소수들로 나누어 줌
3. 소수들로 나누는 순서대로 나눌 것.

