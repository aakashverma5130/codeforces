#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int>h(n);
    int maxindex = 0;
    int minindex = n-1;
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    for(int i=0;i<n;i++){
        if(h[i] > h[maxindex]){
            maxindex = i;
        }
    if(h[i] <= h[minindex]){
        minindex = i;
    }
}
int count = (maxindex-0)+(n-1-minindex);
if(maxindex > minindex){
    count--;
}
cout << count;
return 0;
}