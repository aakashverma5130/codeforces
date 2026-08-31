#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k,num;
    cin >> n >> k;
    num = n;
    for(int i=1;i <= k;i++){
        if(num%10 != 0){
            num = num - 1;
        }
        else if( num%10 == 0){
            num = num / 10;
        }
 }
    cout << num;
    return 0;
}