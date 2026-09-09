#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int y;
    cin >> y;
    bool found = false;
    while(!found){
        y++;
        found = true;
        string s = to_string(y);
        for(int i=0;i<3;i++){
            for(int j=i+1;j<4;j++){
                if(s[i] == s[j]){
                    found = false;             
                }
            }
        }
    }
    cout << y;
    return 0;
}