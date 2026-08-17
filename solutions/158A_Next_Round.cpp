#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n , k , count = 0;
    cin >> n >> k;
    int points[n];
    for(int i=0; i<n; i++)
    {
        cin >> points[i];
    }
for(int i=0; i<n ; i++)
{
    if(points[i] >= points[k-1] && points[i] > 0)
    {
        count++;
    }
}
cout << count;
return 0;
}