#include <iostream>
#include <stack>

using namespace std;

int main() {
    int k;
    cin >> k;
    int a[k];
    int b[k] = {0,};
    int q = 0;
    
    for(int i=0;i<k;i++) {
        cin >> a[i];
        
        if(a[i] > 0) {
            b[q] = a[i];
            q++;
        }
        else if(a[i] == 0) {
            b[q-1] = 0;
            b[q--];
        }

    }
    
    int sum = 0;
    
    for(int i=0;i<k;i++) {
        sum += b[i];
    }
    cout << sum << endl;
    
    
}

#4949 문제풀고 10분만에 품 확실히 stl안쓰고 구현으로 한번 해보면 그 분야는 훨씬 이해가 쉬운듯하다
