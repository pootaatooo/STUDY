#include <iostream>
#include <queue>

using namespace std;

struct compare_abs {
    bool operator()(int a, int b) {
        
        if(abs(a) == abs(b)) {
            return a > b;
        }
        else
            return abs(a) > abs(b);
    }
    
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x;
    cin >> n;
    priority_queue<int, vector<int>, compare_abs> q;
    
    for(int i=0;i<n;i++) {
        cin >> x;
        
        if(x != 0) {
            q.push(x);
        }
        else if(x == 0) {
            if(!q.empty()) {
                cout << q.top() << '\n';
                q.pop();
            }
            else
                cout << "0\n";
        }

    }

}

구조체 compare_abs를 보면 bool operator를 사용한다. 이는 true값 혹은 false값 두개만을 반환하는 함수다.

if(abs(a) == abs(b)) 
    return a > b;
else
    return abs(a) > abs(b);

이 식은 무엇을 의미하냐면
절대값이 같은 두개의 변수가 있을 때, a의 실제값이 크면 true 반환(오름차순이므로 a가 우선순위가 되어서 b부터 a값까지 올라감)
b의 실제값이 크면 false 반환(내림차순이므로 b가 우선순위가 되어서 작은값인 a값부터 b값까

뭐야 ㅅㅂ 개헷갈린다
