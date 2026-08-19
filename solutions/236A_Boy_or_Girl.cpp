#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1;
    cin >> s1;
    sort(s1.begin(),s1.end());
    int count = 1;
    for(int i = 1;i < s1. length(); i++)
    {
        if(s1[i] != s1[i-1])
        {
            count++;
        }
}
if(count%2 != 0)
{
    cout <<  "IGNORE HIM!";
}
else
{
    cout << "CHAT WITH HER!";
}
return 0;
}