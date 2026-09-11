#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    if(n%2 == 0){
        cout << n/2 <<endl;
    }
    else{
        long long num = -(n/2 + 1);
        cout << num << endl;
    }
    return 0;
}