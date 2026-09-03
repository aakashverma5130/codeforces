#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,ca=0,cd=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;s[i] != '\0';i++){
        if(s[i] == 'A'){
            ca++;
        }
    else {
        cd++;
    }
}
if(ca > cd){
    cout << "Anton";
}
else if(ca < cd){
    cout << "Danik";
}
else{
    cout << "Friendship";
}
return 0;
}