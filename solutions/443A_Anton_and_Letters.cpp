#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<char>ch;
    string s;
    getline(cin,s);
    for(auto it: s){
        if(it >='a' && it <='z'){
            ch.insert(it);
        }
    }
    cout << ch.size();
    return 0;
}