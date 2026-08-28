#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int lowcount = 0,uppercount = 0;
    for(auto it = s.begin();it != s.end();it++){
        if(islower(*it)){
            lowcount++;
        }
    else{
        uppercount++;
    }
}
for(auto it = s.begin(); it != s.end() ; it++){
    if(lowcount < uppercount){
        *it = toupper(*it);
    }
else{
    *it = tolower(*it);
}
cout << *it;
}
return 0;
}