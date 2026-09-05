#include <bits/stdc++.h>
using namespace std;
 
int main() {
   string s;
   string t;
   cin >> s;
   cin >> t;
   if(s.length() == t.length() && equal(s.begin(),s.end(),t.rbegin())){
       cout << "YES";
   }
   else{
       cout << "NO";
   }
    return 0;
}