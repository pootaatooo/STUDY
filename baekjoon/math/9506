완전수 구하는 법
n = 6일때 for문으로 n을 1부터 6까지 나누었을때 나머지가 없는 수들끼리 (n값 제외) 더했을 때 그 값이 완전수인지 아닌지 판단티비


#####

#include <iostream>

using namespace std;

int main() {
    int n;
    int yak = 0;
    
    while(1) {
        cin >> n;
        
        for(int i = 0; i < n; i++) {
            
            if(n % i == 0)
                yak += i;
            else
                continue;
            
            if(yak == n)
                cout << n << ' ' << '=' << ' ' << i << ' ' << '+' << ' ' << i << ' ' << '+' << ' ' << i;
            else
                cout << n << " is NOT perfact.";
        }
        
        if(n == -1)
            break;
    }
    
}
