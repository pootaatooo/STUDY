#include <iostream>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i=0;i<t;i++) {
        int n;
        cin >> n; 
        map<string,int> m; // 각 테스트케이스마다 맵을 새로 생성
        string x, y;
        
        for(int j=0;j<n;j++) {
            cin >> x >> y;
            m[y]++;  // m이라는 map에 y라는 string이 몇번 나오는지 카운트
        }
        
        int re = 1;
        
        for(auto iter=m.begin();iter!=m.end();iter++) { // m에 겹치지 않는 y값이 나온만큼 반복
            re *= (iter->second+1);                    // iter->의 first값은 key(y값)을 가리키고
            //cout << iter->second << endl;            // second값은 key이 나온 횟수를 가리킨다.
        }
        
        cout << re-1 << endl; 
    }


}

# c++11이후에 나온 것들 공부..

배열풀이
#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        // 배열 초기화
        const int maxSize = 101;
        int countByType[maxSize] = {0};

        for (int i = 0; i < n; i++) {
            std::string name, type;
            std::cin >> name >> type;
            countByType[std::stoi(type)]++; // 종류에 해당하는 인덱스의 값을 1 증가
        }

        int result = 1;

        // 각 종류별로 (옷의 개수 + 1)을 곱하여 경우의 수를 계산
        for (int j = 0; j < maxSize; j++) {
            result *= (countByType[j] + 1);
        }

        // 모든 종류에서 아무것도 선택하지 않은 경우를 제외
        result--;

        std::cout << result << std::endl;
    }

    return 0;
}

