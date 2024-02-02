#include <iostream>
#include <vector>

using namespace std;

long long cnt = 0;
vector<pair<char,char>>v;

void hanoi(int n, char a, char b, char c) {
    if(n == 1) {
        //cout << a << ' ' << c << '\n';
        v.push_back(make_pair(a,c));
        cnt++;
    }
    else { // else문 굳이 없어도 됨
        hanoi(n-1, a, c, b);
        //cout << a << ' ' << c << '\n';
        v.push_back(make_pair(a,c));
        cnt++;
        hanoi(n-1, b, a, c);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    long long n;
    cin >> n;
    
    hanoi(n, '1', '2', '3');
    
    cout << cnt << '\n';
    
    int x = v.size();
    if(n <= 20) {
        for(int i=0;i<x;i++) {
            cout << v[i].first << ' ' << v[i].second << '\n';
        }
    }
    
    return 0;
}
char -> int 변경해도 바뀌는거 없음

#phytyon 코드 개사기
def hanoi(n, a, b, c):
    if n == 1:
        print(a, c)
        return
    hanoi(n-1, a, c, b)
    print(a, c)
    hanoi(n-1, b, a, c)
    
n = int(input())

print(2**n - 1)

if n <= 20:
    hanoi(n, 1, 2, 3)
