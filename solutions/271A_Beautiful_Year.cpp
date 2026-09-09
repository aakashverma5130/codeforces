#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int y;
    cin >> y;
 
    do {
        y++;
        string s = to_string(y);
        set<char> digits(s.begin(), s.end());
 
        if (digits.size() == s.size()) {
            cout << y;
            break;
        }
    } while (true);
 
    return 0;
}