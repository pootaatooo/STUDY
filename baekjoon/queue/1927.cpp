#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> q;
    
    for(int i=0;i<n;i++) {
        cin >> x;
        
        if(x > 0) {
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

priority_queue: 우선순위 큐로서 특정 우선순위에 따라 정렬되어 있어 가장높은 우선순위를
                가진 요소가 큐의 맨 앞에 위치함 기본적으로 내림차순으로 정렬됨.

heap은 최소힙이나 최대힙으로 나뉨.
최소힙: 부모노드가 자식노드보다 작음 (오름차순 = 작은거부터 나와야함)
최대힙: 부모노드가 자식노드보다 큼 (내림차순 = 큰거부터 나와야함)

