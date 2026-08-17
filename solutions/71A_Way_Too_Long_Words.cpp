#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        if(s.length() > 10)
        {
            cout << string(1,s[0]) + to_string(s.length() - 2) + string(1,s[s.length()-1]) << endl;
        }
    else
    {
        cout << s << endl;
    }
}
return 0;
}