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
    int n = s.size();
    string ans;
    bool prev = false;
    int i = 0, j = 0;
    while(i < n) {
        while(j < n && s[i]==s[j]) j++;
        int l = j - i;
        if(l==1) {
            ans += s[i];
            prev = false;
        }
        else {
            if(prev) {
                ans += s[i];
                prev = false;
            } else {
                ans += s[i];
                ans += s[i];
                prev = true;
            }
        }
        i = j;
    }
    cout << ans;
}