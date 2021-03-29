#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
The number should only consist of digits 1 and 4.
The number should begin with digit 1.
The number should not contain three consecutive fours (i.e. 444).
*/

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> s;
    if(s[0]!='1') {
        cout << "NO";
        return 0;
    }
    if(s.find("444")!=string::npos) {
        cout << "NO";
        return 0;
    }
    for(char ch : s) {
        if(ch!='1' && ch!='4') {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}