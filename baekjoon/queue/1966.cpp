#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<pair<int,int>>v;
        priority_queue<int> pq; // 우선순위 큐는 자동으로 내림차순
        
        for(int i=0;i<n;i++) {
            int imp;
            cin >> imp;
            v.push_back({imp,i}); // 중요도와 그 순서를 넣어줌
            pq.push(imp);
        }
        
        int cnt = 0; 
        
        while(1) { //!v.empty()필요없음
            int imp = v.front().first; // 먼저 변수에 저장해주고
            int idx = v.front().second; // "
            v.erase(v.begin()); // 제일 앞의 원소 지움
            
            if(imp == pq.top()) { // 가장 높은 우선순위와 같을때
                pq.pop(); // 우선순위상 첫번 째 문서를 인쇄했다는 뜻
                cnt++; // 문서개수
                
                if(idx == m) { // 그 번호가 m번째랑 같을때 
                    cout << cnt << '\n';
                    break; // v는 절대 empty를 반환하지 않고, 여기서 반복문이 끝남
                }
            }
            else { // 아닌경우 다시 가장 아래에 넣어줌(모든 조건 만족할때까지 반복)
                v.push_back({imp,idx});
            }
            
        }
        
    }
    

}
