#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> s;
    if(s[0]!='-') {
        cout << s;
        return 0;
    }
    if(s.size()==2) {
        cout << 0;
        return 0;
    }
    int n = s.size();
    if(s[n-1]>=s[n-2]) {
        string ans = s.substr(0, n-1);
        if(ans=="-0") cout << 0;
        else cout << ans;
        return 0;
    }
    string ans = s.substr(0, n-2) + s[n-1];
    if(ans=="-0") cout << 0;
    else cout << ans;
}