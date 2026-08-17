#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int count = 0;
    string X;
    for(int i=0;i<n ;i++)
    {
        cin >> X;
        if( X == "++X" || X == "X++")
        {
            count ++;
        }
    else if( X == "--X" || X == "X--")
    {
        count--;
    }
}
cout << count;
return 0;
}