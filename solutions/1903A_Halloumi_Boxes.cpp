#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<long long>copy = a;
        sort(copy.begin(),copy.end());
        if(copy == a || k>1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}