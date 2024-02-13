#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll; // typedef문은 특정 자료형에 대해 새로운 별칭을 만드는 데 사용 
                     // 즉, long long을 ll이라는 이름으로 사용하겠다라는 뜻.

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int k, n;
    cin >> k >> n;
    ll ran[k];
    
    for(int i = 0; i < k; i++) { // 값 초기화
        cin >> ran[i];
    }
    
    sort(ran, ran + k); // 오름차순 정렬
    
    ll left = 1; // 부분집합의 합의 최소값의 가능한 최솟값
    ll right = ran[k - 1]; // 부분집합의 합의 최소값의 가능한 최댓값
    ll result = 0;
    
    while (left <= right) { // for(int i=1;i<ran[k-1];i++), 1부터 k의최대값까지 반복
        ll mid = left + (right - left) / 2; // 이진 탐색을 위한 중간값
        // ll을 사용하면 상관없으나 int를 사용할때는 left + (right - left)이런식으로 오버플로우를 방지할 수 있음
        ll cnt = 0;
        for (int i = 0; i < k; i++) {
            cnt += ran[i] / mid;
        }
        
        if (cnt >= n) {
            left = mid + 1; // 더 큰 부분집합을 만듦
            result = mid;
        } 
        else
            right = mid - 1; // 더 작은 부분집합을 만듦
    }
    
    cout << result << endl;
    
    return 0;
}
