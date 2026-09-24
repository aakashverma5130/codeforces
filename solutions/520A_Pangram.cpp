#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,cnt=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<26;i++){
        for(int j=0;j<n;j++){
            char lower = tolower(s[j]);
            if('a'+i == lower){
                cnt++;
                break;
            }
        }
}
if(cnt==26){
    cout << "YES";
}
else{
    cout << "NO";
}
return 0;
}