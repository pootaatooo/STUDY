#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n; 파일이름의 개수
    vector<string> v(n); // 입력받을 파일 이름
    
    for(int i=0;i<n;i++) {
        cin >> v[i]; // 파일 이름을 입력받음
    }
    
    string pattern = v[0]; // pattern 이라는 변수에 첫번째 파일 이름을 기준으로 삼는다
    
    for(int i=0;i<(int)pattern.size();i++) { // 모든 파일이름의 자릿수는 같으니까 기준 문자열의 사이즈만큼 반복한다
        for(int j=1;j<n;j++) { // 다른 파일이름과 비교하기위해 n번 돌려준다
            if(pattern[i] != v[j][i]) { 패턴의 첫번째 문자와 두번째 파일의 이름의 첫번째문자를 비교한다
                pattern[i] = '?'; // 서로 다를경우 패턴의 글자를 ?로 바꿔준다
                break; // 더이상 비교해도 의미가 없으므로 브레이크
            }
        }
    }
    
    cout << pattern << endl; // 바뀐 문자열을 출력해준다

    
}
