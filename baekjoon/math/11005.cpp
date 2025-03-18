#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, b;
    vector<long long> v;
    cin >> n >> b;
    while(n / b != 0) {
        v.push_back(n%b);
        n = n / b;
    }
    
    v.push_back(n%b);
    
    for(int i=v.size()-1;i>=0;--i){
        cout << v[i];
    }
    
    
    
    
}
