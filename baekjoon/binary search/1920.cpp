# 백준 블로그 109 이진탐색 참고
## 이 문제 참 좋다. binary search + 함수 선언의 주소값 빠르기 + 벡터 심화 + c++ fast i/o + 적절한 시간 복잡도 활용 등
  최고다. 다시 풀어볼 것. ★★★★★★★★★★★★★★★★ㅋㅋㅋㅋ




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    int a, b;
    
    cin >> n;
    vector<int> v1(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a;
        v1[i] = a;
    }
    
    cin >> m;
    vector <int> v2(m);
    int count = 0;
    
    for(int i = 0; i < m; i++) {
        cin >> b;
        v2[i] = b;
    }
    
    sort(v1.begin(), v1.end());
    int low = 0 , high = n - 1;
    
    count = binary_search(vector<int> v1 , int low, int high, vector<int> v2);
    
    
    /*for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(v2[i] == v1[j]) 
                count[i]++;
        }
    }*/
    
    for(int i = 0; i < m; i++) {    
        cout << v1[i] << '\n';
    }

    
}

//////////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binary_search(vector<int>& v1, int low, int high, vector<int> v2) {
    if(low > end)   return false;
    int mid = (low + high) / 2;
    
    if(v1[mid] == v2)   return true;
    
    if(v1[mid] > v2)
        return binary_search(v1, low, mid - 1, v2);
    else
        return binary_search(v1, mid + 1, high, v2);
}


int main() {
    int n, m;
    int a, b;
    
    cin >> n;
    vector<int> v1(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a;
        v1[i] = a;
    }
    
    cin >> m;
    vector <int> v2(m);
    int count = 0;
    
    for(int i = 0; i < m; i++) {
        cin >> b;
        v2[i] = b;
    }
    
    sort(v1.begin(), v1.end());
    int low = 0 , high = n - 1;
    
    for(int i = 0; i < m; i++) {
        count = binary_search(vector<int> v1(n) , int low, int high, vector<int> v2(m));
    }
    
    for(int i = 0; i < m; i++) {    
        cout << v1[i] << '\n';
    }

    
}


///////////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search(vector<int> v1, int low, int high, int target) {
    int mid = (low + high) / 2;
    if(mid < low || mid > high)   return 0;
    
    if(v1[mid] == target)  return 1;
    
    if(v1[mid] > target)
        return binary_search(v1, low, mid - 1, target);
        
    else
        return binary_search(v1, mid + 1, high, target);
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m;
    int a, b;
    
    cin >> n;
    vector<int> v1(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a;
        v1[i] = a;
    }
    
    cin >> m;
    vector <int> v2(m);
    
    for(int i = 0; i < m; i++) {
        cin >> b;
        v2[i] = b;
    }
    
    sort(v1.begin(), v1.end());
    int low = 0 , high = n - 1;
    
    for(int i = 0; i < m; i++) {
        cout << binary_search(v1 , low, high, v2[i]) << '\n';
    }

    
}
