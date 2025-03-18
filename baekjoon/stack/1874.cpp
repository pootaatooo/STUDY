#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    vector<int> v; // 입력받을 배열
    vector<char> re; // +, - 저장
    stack<int> st; // 스택구현(LIFO)
    
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    int j = 1;
    bool fl = true; // true면 re출력 false면 NO
    
    for(int i=0;i<n;i++) {
        while(j <= v[i]) { // 입력받은 배열의 첫번째 수까지
            st.push(j); // 스택에 넣어줌
            re.push_back('+'); // push과정인 + 저장
            j++; 
        }
        
        if(st.top() == v[i]) { // 스택의 가장 마지막에 들어온 값이 첫번째 수랑 같으면
            st.pop(); // 하나 지워주고
            re.push_back('-'); // pop과정인 - 저장
        }

    }
    
    if(!st.empty()) { // 다 돌았는데 st이 남아있다면
        fl = false; // 틀린거
    }
    
    if(fl) {
        for(auto i=re.begin();i!=re.end();i++) {
            cout << *i << '\n';
        }
    }
    else cout << "NO";
    
    
}
