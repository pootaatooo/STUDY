#include <iostream>

using namespace std;

int main() {
    bool self_num[10001] = {0,}; // 모든 요소를 false로 초기화시켜줌
    
    for(int i=1;i<=10000;i++) { // 1~10000까지의 수를 탐색
        
        if(!self_num[i]) { // false인 경우 즉, 생성자가 있다고 판단되지 않은 경우 그 셀프넘버를 출력해준다
            cout << i << '\n';
        }
        
        int sum = i; 
        int part = i;
        
        while(part) { // part가 0이 되기 전까지 반복
            sum += part % 10; // i값의 1의 자리수를 더해줌
            part /= 10; // 10을 나눠줌으로써 다음 자리수를 가리킴 part가 1의 자리수가 되었을 때 0이 되므로 반복문 탈출
        }
        
        if(sum <= 10000) { // 10000이상의 셀프넘버는 판단할 필요가없으므로 10000보다 작은수들에 한해서 판단
            self_num[sum] = true; // 생성자가 존재하는 셀프넘버는 true가 되므로 위 if문에서 false로 출력되지 않음
        }
        
    }
    
}
