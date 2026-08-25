#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int total = 0;
    for(int i=1;i <= w; i++)
    {
        total = total + k*i;
    }
    if(total > n){
        cout << total-n;
    }
    else if( total < n || total == n){
       cout << '0';
    }
return 0;
}