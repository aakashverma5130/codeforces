#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    int a,b;
    int moves;
    for(int i=0;i<t;i++){
        cin >> a >> b;
        int diff = abs(a-b);
        moves = diff/10;
        if(diff%10 != 0){
              moves++;
          }
        cout << moves << endl;
    }
    return 0;
}