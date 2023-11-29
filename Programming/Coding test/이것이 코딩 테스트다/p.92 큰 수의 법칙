#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    int res = 0;
    int x = 0;
    
    for(int i=0;i<m;i++) {
        if(x < k) {
            res += a[n-1];
            x++;
        }
        else if(x == k) {
            res += a[n-2];
            x = 0;
        }
    }
    
    cout << res;
    
}

이 문제는 가장 큰수(n-1값)와 가장 큰수보다 작은수(n-2값) 2개의 값만 사용하기 때문에
별 다른 예외처리 없이 풀었다. 

https://github.com/ndb796/python-for-coding-test/blob/master/3/2.cpp 책 답지 내용

## 문제범위가 100억 이상처럼 커진다면 시간 초과 판정을 받을 것이다. 수학적 아이디어를 사용하자
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    int res = 0;
    int result = 0;
    
    res = m / (k+1) * k + m % (k+1);
    result = res * a[n-1];
    result += (m - res) * a[n-2];
    
    cout << result;
    
    
}
수열이 반복되는 횟수를 통해 가장큰 수(res)가 등장하는 횟수를 구함
배열 길이(m)에서 가장큰 수가 등장하는 횟수를 빼면서 두번째로 큰 수가 나와야할 횟수를 구함
가장큰수가 등장하는 횟수 * 가장큰수(a[n-1]) , 두번째로 큰 수가 등장하는 횟수 * 두번째로 큰 수(a[n-2])를 통해 답을 구함.


