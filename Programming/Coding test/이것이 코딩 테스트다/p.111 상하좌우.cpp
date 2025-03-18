#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    char c;
    int x = 1, y = 1;
    
    while(cin >> c) {
        if(c == 'R') {
            x++;
            if(x == 0 || x == n+1) {
                x--;
                continue;
            }
        }
        else if(c == 'L') {
            x--;
            if(x == 0 || x == n+1) {
                x++;
                continue;
            }
        }
        else if(c == 'U') {
            y--;
            if(y == 0 || y == n+1) {
                y++;
                continue;
            }
        }
        else if(c == 'D') {
            y++;
            if(y == 0 || y == n+1) {
                y--;
                continue;
            }
        }
        
    }
    
    cout << y << ' ' << x;
    
}

단순하게 nxn 정사각형 공간에서 0, n+1 이 되는 경우, 즉 주어진 공간을 벗어나는 경우를 제외하고
x값 y값을 연산해서 출력해줬다.

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    char c;
    int x = 1, y = 1;
    
    while(cin >> c) {
        if(c == 'R') {
            x++;
            if(x < 1 || x > n) {
                x--;
                continue;
            }
        }
        else if(c == 'L') {
            x--;
            if(x < 1 || x > n) {
                x++;
                continue;
            }
        }
        else if(c == 'U') {
            y--;
            if(y < 1 || y > n) {
                y++;
                continue;
            }
        }
        else if(c == 'D') {
            y++;
            if(y < 1 || y > n) {
                y--;
                continue;
            }
        }
        
    }
    
    cout << y << ' ' << x;
    
}

답지를 보니 예외처리하는 부분을 1보다 작거나 n보다 클 때로 표현해주는게 더 알아보기 쉬울 거 같다.
답 https://github.com/ndb796/python-for-coding-test/blob/master/4/1.cpp
왜 직관적이지 않은 방법을 사용하지라는 의문이 들었는데 이원호병장님이 나중에 그래프나 DFS같은거 풀면 나온다고하네용
