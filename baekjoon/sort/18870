1. vector 이용해서 내림차순 정렬.
2. v1을 내림차순 정렬한 요소들을 좌표압축 한 값으로 만듬
(가장 처음에 나오는 요소부터 0 ~ n) , v2는 그 내림차순 정렬된 값 그대로 저장
3. for문을 돌려서 i ~ a까지 해줌 (같은 값일때 같은 i값이 나오는 예외처리)
4. 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int a, b;
    vector<int> v1;
    vector<int> v2;
    
    cin >> a;
    
    for(int i = 0; i < a; i++) {
        cin >> b;
        v1.push_back(b);
        v2.push_back(b);
    } 
    
    sort(v1.begin(), v1.end());
    
    for(int i = 0; i < a; i++) {
            
        for(int j = 0; j < a; j++) {
            
            if(v2[i] == v1[j]) {
                
              !!!!!  /*if(v1[i] == v1[i+1])
                    v1[i+3]  = j;*/
            
                v2[i] = j;
            }
                
                
        }

        //cout << v1[i] << ' ' << v2[i] << '\n';
        cout << v2[i] << ' ';
        
    }
    
}

위 코드 문제.
999
999
999
1000
1000
1000 이렇게 정렬되어 있을때 배열의 i값
0
1
2
3
4
5 즉 999 일때는 0이 나오고 1000일 때는 3이 나옴.
절대좌표에서는 999 다음이 1000이므로 0 과 1이 출력되어야함
같은 값 예외처리가 필요함.
지금 드는 생각은 i + 2 이런식으로 배열인덱스를 읽어주는 범위를 뛰어넘어버리면 되지 않을까 싶긴 한데 구현이 안됨 시간이 필요할듯

#include <iostream> 참고용티비
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    int a, b;
    vector<int> v;
    map<int, int>m;
    
    cin >> a;
    
    for(int i = 0; i < a; i++) {
        cin >> b;
        v.push_back(b);
        m.insert({b,0});
    } 
    
    int i = 0;
    
    for(pair<int, int>p : m) {
        if(m.find(p.first) != m.end()) {
            m[p.first] = i++;
        }
    }
    
    for(auto w : v)
        cout << m[w] << ' ';
    
}


