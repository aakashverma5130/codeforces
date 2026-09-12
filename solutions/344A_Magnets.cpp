#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,count = 0;
    cin >> n;
    string pos[n];
    for(int i=0;i <= n-1;i++){
        cin >> pos[i];
        if(i == 0 || pos[i] != pos[i-1]){
            count++;
        }
}
cout << count;
return 0;
}