#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s1, s2;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s1 >> s2;
    string ans(s1.size(), '0');
    for(int i = 0; i < s1.size(); ++i) {
        ans[i] = (s1[i] ^ s2[i]) + '0';
        // ans[i] = char(s1[i] ^ s2[i]);
        // if(s1[i]==s2[i]) ans[i] = '0';
        // else ans[i] = '1';
    }
    cout << ans;
}