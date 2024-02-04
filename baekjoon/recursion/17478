#include <iostream>

using namespace std;

void aaa(int k) {
    k--; // 첫번째 반복에는 붙여주지 않음.
    
    while(k--) {
        cout << "____";
    }
    
}

void recursion(int n, int k) {
    k++;
    
    if(n == 0) {
        aaa(k);
        cout << "\"재귀함수가 뭔가요?\"" << '\n';
        aaa(k);
        cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" <<'\n';
        aaa(k);
        cout << "라고 답변하였지." << '\n';
        return;
    }
    
    aaa(k);
    cout << "\"재귀함수가 뭔가요?\"" << '\n';  // 큰따옴표를 출력하고 싶으면 앞에 역슬래시 붙이기
    aaa(k);
    cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << '\n';
    aaa(k);
    cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << '\n'; 
    aaa(k);
    cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\""<< '\n';
    
    recursion(n-1, k);
    
    aaa(k);
    cout << "라고 답변하였지." << '\n';
}

int main() {
    int n;
    cin >> n;
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << '\n';
    int k = 0;
    recursion(n, k);
}
