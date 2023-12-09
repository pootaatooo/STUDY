#include <iostream>
#include <cmath>

using namespace std;

const int MOD = 1234567891;
const int R = 31;

int main() {
    int l;
    cin >> l;
    string s;
    cin >> s;
    
    long long result = 0;
    long long x = 1;
    
    for(int i=0;i<l;i++) {
        result = (result + (s[i] - 'a' + 1) * x) % MOD;
        x = (x*R) % MOD;
    }
    
    cout << result << endl;
    
}

s[i] + 'a' + 1 부분은 알파벳 순번, x는 31의 1승부터 다음 제곱수들, MOD는 나머지연산을 통해 MOD값보다 작은 수들만
나올 수 있게 설정해준 것(hashing은 비교적 큰 값이 나와서 오버플로우 방지위함)
