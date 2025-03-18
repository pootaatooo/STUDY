#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int>v;
    vector<int>c;
    
    v.push_back(0);  // 0.
   
    for(int i=1;i<=n;i++) {
        cin >> num;
        v.push_back(num);
    } // 1.
   
    sort(v.begin(),v.end());
    

    for(int i=1;i<=n+1;i++) {
        v[i] = v[i-1]+v[i];
    } // 2.
    
    // for(int i=1;i<=n;i++) {
    //     cout << v[i] << ' ' << endl;
    // }
    
    
    for(int i=1;i<=n;i++) {
       v[i] = v[i-1]+v[i];
    } // 3.
   
    
    // for(int i=1;i<=n;i++) {
    //     cout << v[i] << ' ' << endl;
    // }
    
    
    cout << v[n]<<endl;
    
}

입력 받아준다. (0.가장 처음 입력값 앞에 0도 만들어줌)
(0) 3 1 4 3 2

1. 각 인출속도의 합의 최솟값을 구하려면 인출속도가 가장 낮은 순서대로 정렬 시켜준다.
(0) 1 2 3 3 4

2. 각 사람의 인출하는데 걸리는 시간을 구한다.
(0) 1 3 6 9 13

3. 각 사람들의 인출하는데 걸리는 시간을 모두 더해준다.
(0) 1 4 10 19 32
