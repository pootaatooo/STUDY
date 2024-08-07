#include <iostream>
#include <vector>

using namespace std;

int white = 0;
int blue = 0;

void recursion(const vector<vector<int>>& v, int startRow, int startCol, int endRow, int endCol) {
    
    int a = v[startRow][startCol];
    cout << a << endl;
    int midRow = (startRow+endRow)/2;
    int midCol = (startCol+endCol)/2;
    
    for(int i=startRow;i<endRow;i++) {
        for(int j=startCol;j<endCol;j++) {
            if(a != v[i][j]) {
                recursion(v, startRow, startCol, midRow, midCol); // 1사분면
                recursion(v, midRow, startCol, endRow, midCol);  // 2사분면
                recursion(v, startRow, midCol, midRow, endCol);  // 3사분면
                recursion(v, midRow, midCol, endRow, endCol);  // 4사분면
                return;
            }
        }
    }
    
    if(a == 0) white++;
    else blue++;
    
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    
    vector<vector<int>> v(n, vector<int>(n,0));
    
    for(int i=0;i<n;i++) {   //배열 입력
        for(int j=0;j<n;j++) {
            cin >> v[i][j];
        }
    }
    
    recursion(v, 0, 0, n, n);
    
    cout << white << '\n' << blue << '\n';
    
}


## a값이 참조하는 게 왜 저런식으로 출력이 되는지 이해되지 않음.
