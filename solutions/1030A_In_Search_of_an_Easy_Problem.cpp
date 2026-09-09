#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int count =0;
    int p;
    for(int i=0;i<n;i++){
        cin >> p;
        if(p == 1){
            count += 1;
        }
}
if(count == 0){
    cout << "EASY" << endl;
}
else if(count >= 1){
    cout << "HARD";
}
return 0;
}