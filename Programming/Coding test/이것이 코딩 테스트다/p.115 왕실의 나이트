#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
    
    int column = s[0] - 'a' + 1;
    int row = s[1] - '0';
    int result = 0;
    
    for(int i=0;i<8;i++) {
        int nextrow = row + dx[i];
        int nextcolumn = column + dy[i];
        
        if(nextrow >= 1 && nextrow <= 8 && nextcolumn >= 1 && nextcolumn <= 8) {
            result++;    
        }
        
    }
    
    cout << result << '\n';
    
}

난이도 하가 아닌거 같다. 머리가 돌아가지 않는다. 답지를 베꼈다.
- dx, dy로 움직일 수 있는 동선
- 입력받은 문자열을 각각 int형으로 변경해줌
- 입력받은 자리를 찾아 1보다 크거나 같고 8보다 작거나 같은(8x8 체스판에 벗어나지 않는) 행, 열 두가지 움직임을 카운팅
답 https://github.com/ndb796/python-for-coding-test/blob/master/4/3.cpp
