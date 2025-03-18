#include <iostream>

using namespace std;

int main() {
    int n[1001] = {0,};
    int a;
    cin >> a;
    
    n[1] = n[3] = n[4] = 1;
    
    for(int i=5;i<=a;i++) {
        if(n[i - 1] != 1 || n[i - 3] != 1 || n[i - 4] != 1) {
            n[i] = 1;
        }
        else
            n[i] = 0;   
    }
    
    if(n[a] == 1) 
        cout << "SK";
    else
        cout << "CY";

}

올해 안에 실버1 만드려고 날먹문제 5개나 풀었다.
하나하나씩 경우의 수랑 규칙을 찾으면 쉽게 풀 수 있는 문제.
위 방법이랑 
#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    if(n % 7 == 0 || n % 7 == 2) 
        cout << "CY";
    else
        cout << "SK";

}
아래 방법 모두 가능 (돌 게임6)
