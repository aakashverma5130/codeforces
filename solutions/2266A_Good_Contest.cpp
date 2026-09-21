#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n,a1,a2,a3;
        cin >> n >> a1 >> a2 >> a3;
        cout << n - min({a1,a2,a3}) << endl;
    }
    return 0;
}