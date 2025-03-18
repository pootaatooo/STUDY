#include <iostream>

using namespace std;

int main() {
    int t, k, n;
    cin >> t;
    
    for(int i=0;i<t;i++) {
        cin >> k;
        cin >> n;
        
        int arr[k+1][n];
        
        for(int j=0;j<n;j++) {
            arr[0][j] = j+1;
        }
        
        for(int a=0;a<k;a++) {
            for(int b=0;b<n;b++) {
                if(b == 0)
                    arr[a+1][b] = 1;
                else 
                    arr[a+1][b] = arr[a+1][b-1] + arr[a][b];
                
            }
        }
        
        cout << arr[k][n-1] << endl;
    }
    
    
    
}

good practice
