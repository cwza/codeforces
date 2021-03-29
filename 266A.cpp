#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> s;
    int i = 0;
    int ans = 0;
    for(int j = 1; j < n; ++j) {
        if(s[i] != s[j]) {
            i = j;
        } else {
            ans++;
        }
    }
    cout << ans;
}