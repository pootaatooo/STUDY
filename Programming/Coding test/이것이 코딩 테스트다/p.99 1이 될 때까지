#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int cnt = 0;
    
    
    while(n != 1) {
        
        if(n % k == 0) {
            cnt++;
            n /= k;
        }
        else {
            cnt++;
            n -= 1;
        } 
        
    }
    
    cout << cnt;
    
    
}

간단하게 n이 1이 아닐때동안 n값을 k로 나누었을 때 나누어지면 카운팅하고 n값 갱신
아니면 n - 1하고 카운팅 후 n값 갱신.

답 https://github.com/ndb796/python-for-coding-test/blob/master/3/6.cpp

#include <bits/stdc++.h>

using namespace std;

int n, k;
int result;

int main() {
    // N, K를 공백을 기준으로 구분하여 입력 받기
    cin >> n >> k;

    while (true) {
        // N이 K로 나누어 떨어지는 수가 될 때까지만 1씩 빼기
        int target = (n / k) * k;
        result += (n - target);
        n = target;
        // N이 K보다 작을 때 (더 이상 나눌 수 없을 때) 반복문 탈출
        if (n < k) break;
        // K로 나누기
        result += 1;
        n /= k;
    }

    // 마지막으로 남은 수에 대하여 1씩 빼기
    result += (n - 1);
    cout << result << '\n';
}

위 답을 해석해봤는데 시간 복잡도도 내 코드랑 동일하고 좀 해석하기 복잡하다. 다른 반례가 있을지 모르겠다.
#include <bits/stdc++.h>

using namespace std;

int n, k;
int result;

int main() {
    // N, K를 공백을 기준으로 구분하여 입력 받기
    cin >> n >> k;

    while (true) {

        int target = (n / k) * k;
        cout << target << ' ';
        
        result += (n - target);
        cout << n << ' ' << result <<  ' ';
        n = target;

        if (n < k) break;

        result += 1;
        n /= k;
        cout << result << endl;
    }

    // 마지막으로 남은 수에 대하여 1씩 빼기
    result += (n - 1);
    cout << n - 1 << endl;
    cout << '\n'<< result ;
} 해석코드
