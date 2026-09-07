#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,h;
    cin >> n >> h;
    int f;
    int width = 0;
    for(int i=0;i<n;i++){
        cin >> f;
        if(f > h){
            width += 2;
        }
    else if(f <= h){
        width += 1;
    }
}
cout << width;
return 0;
}