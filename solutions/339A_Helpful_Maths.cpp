#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    string temp = "";
    for(int i=0; s[i] != '\0'; i++)
    {
        if(s[i] == '1' || s[i] == '2' || s[i] == '3')
        {
            temp = temp + s[i];
        }
}
sort(temp. begin(), temp. end());
for(int i=0; i < temp.length(); i++)
{
    cout << temp[i];
    if(i < temp.length() - 1)
    {
        cout << "+";
    }
}
return 0;
}