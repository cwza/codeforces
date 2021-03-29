#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

string s;
int k;

bool isTandem(int l, int r) {
    int n = r-l+1;
    if(n%2!=0) return false;
    int i = l, j = i+n/2;
    while(j<=r) {
        if(s[i]==s[j] || s[i]=='?' || s[j]=='?') {
            i++;
            j++;
        }
        else return false;
    } 
    return true;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> s; cin >> k;
    for(int i = 0; i < k; ++i) s += '?';
    int ans = 0;
    for(int l = 2; l <= s.size(); l+=2) {
        for(int i = 0; i <= s.size()-l; ++i) {
            int j = i + l - 1;
            if(isTandem(i, j)) {
                ans = max(ans, j-i+1);
            }
        }
    }
    cout << ans;
}