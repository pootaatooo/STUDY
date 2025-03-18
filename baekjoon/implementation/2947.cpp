#include <iostream>

using namespace std;

int main() {
    int a[5];
    for(int i=0;i<5;i++) { // 비교 할 입력값 할당
        cin >> a[i];
    }
    int i=0;
    
    while(1) {
        int x,w=0;
        for(int q=0; q<5; q++)
        {
            if(a[q]==q+1) // 배열이 1,2,3,4,5 순서대로 모두 정확하다면 w = 5
                w++;
        }
        if(w==5)
            break; // 모두 정확하다면 끝낸다
            
        if(a[i] > a[i+1]) {
            x = a[i];
            a[i] = a[i+1];
            a[i+1] = x;    // 비교해서 앞에값이 크다면 순서를 바꿔주고 출력
            for(int j=0;j<5;j++) {
                cout << a[j] << ' ';
            }
            i++;  // i값 증가로 비교할 번째수 증가
            cout << endl;
        }
        else
            i++; // a[i] < a[i+1] 경우 다음 수 비교
        
        if(i == 4) // 중요 : i값이 4이상이 되면 배열에서 벗어나기 때문에 4가되면 비교 후 다시 0으로 초기화 시켜줘서 비교해준다
            i=0;
       
    }
    
}
