#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sq[n+1];
    sq[0] = 0;
    sq[1] = 1;
    sq[2] = 2;
    
    for(int i=3;i<=n;i++) {
        sq[i] = sq[i-1] + sq[i-2];
        sq[i] %= 10007;  //  int형의 범위를 넘어가기 때문에 매번 계산때마다 나누어줌.
    }
    cout << sq[n] << '\n';

}
