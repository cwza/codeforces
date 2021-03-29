#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Same as CSES 1661-Subarray Sums II
*/

int k;
string s;
vector<int> inp;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> k;
    cin >> s;
    int n = s.size();
    inp.resize(n);
    for(int i = 0; i < n; ++i) inp[i] = s[i]-'0';

    map<ll, int> cnt;
    cnt[0] = 1;
    ll curSum = 0, ans = 0;
    for(int i = 0; i < n; ++i) {
        curSum += inp[i];
        ans += cnt[curSum-k];
        cnt[curSum]++;
    }
    cout << ans;
}