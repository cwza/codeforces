#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
00 -> 00
11 -> 11, 01, 10
01 -> 01, 11, 10
10 -> 10, 11, 01
First of all, check the length of the two strings to be equal. Then with a little try and guess, you can find out that the zero string (00...0) can't be converted to anything else and nothing else can be converted to zero. All other conversions are possible.
*/

string s1, s2;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> s1 >> s2;
    if(s1.size()!=s2.size()) {
        cout << "NO";
        return 0;
    }
    bool s1All0 = true, s2All0 = true;
    for(char ch : s1) {
        if(ch=='1') {
            s1All0 = false;
            break;
        }
    }
    for(char ch : s2) {
        if(ch=='1') {
            s2All0 = false;
            break;
        }
    }
    if(s1All0 && s2All0) {
        cout << "YES";
        return 0;
    }
    if(s1All0 || s2All0) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
}