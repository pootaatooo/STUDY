#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int a[n][m];
    
    for(int i=0;i<n;i++) {
    
        for(int j=0;j<m;j++) {
            cin >> a[i][j];    
        }
        
    }
    
    int x = 100;
    int w[n];
    
    for(int i=0;i<n;i++) {
    
        for(int j=0;j<m;j++) {
            x = min(x, a[i][j]);
        }
        
        w[i] = x;
        x = 100;

    }
    
    int y = 0;
    
    for(int i=0;i<n;i++) {
        y = max(y, w[i]);
    }

    cout << y << endl;

}

2차원 배열에 각 해당값을 할당시킨 후 그 값들을 w[i]에 각 행 별 최솟값들을 넣어줌
w배열에 값들 중 가장 큰 값을 출력시킴.
하지만 너무 불필요한 요소들이 많음 정리 할 것 
답지 https://github.com/ndb796/python-for-coding-test/blob/master/3/4.cpp 

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int result = 0;
    
    for(int i=0;i<n;i++) {
        int mini = 101;
        
        for(int j=0;j<m;j++) {
            int x;
            cin >> x;
            mini = min(mini, x); 
        }
        
        result = max(mini, result);
        
    }
    
    cout << result << '\n';
    
}
