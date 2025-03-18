#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num[n];
    
    for(int i=0;i<n;i++) {  // 배열 초기화
        cin >> num[i];
    }
    
    //산술평균 출력
    double sum = 0;
    for(int i=0;i<n;i++) {
        sum += num[i];
    }
    
    if(round(sum/n) == -0) cout << 0 << '\n';
    else
        cout << round(sum / n) << '\n';
    
    // 중앙값 출력 (어차피 정렬 안 풀어줘도 될듯)
    sort(num,num+n);
    cout << num[n/2] << '\n';
    
    //최빈값 출력(계수정렬)
    int cnt[8001] = {0,};
    
    for(int i=0;i<n;i++) {
        if(num[i] >= 0) // 0이거나 양수인 경우 그대로 cnt++(누적합) 
            cnt[num[i]]++; 
        else // 음수인경우 4001(-1)부터 8000(-4000)까지
            cnt[(-num[i])+4000]++;
    }
    
    int maxCnt = *max_element(cnt, cnt + 8001); // 최빈값이 몇번 나왔는지
    vector<int> v; // 두번째로 작은 최빈값을 출력하기 위한 벡터

    for(int i = 0; i <= 8000; i++) {
        if(cnt[i] == maxCnt) { // 최빈값과 동일한 빈도를 갖는 요소들의 수를 v에 추가
            v.push_back(i);
        }
    }
    
    for(auto i=v.begin();i!=v.end();i++) { // 음수로 다시 바꿔준다
        if(*i > 4000) {
            *i = -(*i - 4000);
        }
    }
    
    sort(v.begin(), v.end()); // 오름차순 정렬
    
    
    // for(auto i=v.begin();i!=v.end();i++) {
    //     cout << *i << endl;
    // }
    
    if(v.size() == 1) { // 입력이 하나인 경우는 두번째 v가 0이기 때문에 입력값 출력
        cout << v[0] << '\n';
    }
    else
        cout << v[1] << '\n'; // 두번째로 작은 최빈값 출력


    // 범위 출력
    int re = 0;
    re = num[n-1] - num[0];
    cout << re << '\n';
    
    
    
}
