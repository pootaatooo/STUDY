#include <iostream>

using namespace std;

int main() {

    int x;
    int y;
    cin >> x >> y;
    int dis = y-x;
    int z = 1;
    long long sum = 0;

    // 1011 문제에서 약간 다른 조건을 수정함.
    if(x == y) {  // x = y일경우 0을 출력해주고 종료.
        cout << 0;
        return 0;
    }
    
    while(dis > sum+z*2) { 
        sum += z*2; 
        z++; 
    }
        
    if(sum+z>= dis) {
        cout << 2*z-1 << '\n';
    }
    else
        cout << 2*z << '\n';
        
        
}
    
