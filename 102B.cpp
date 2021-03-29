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
    int ans = 0;
    while(s.size()>1) {
        int sum = 0;
        for(char ch : s) sum += ch-'0';
        s = to_string(sum);
        ans++;
    }
    cout << ans;
}