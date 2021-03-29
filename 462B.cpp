#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
string s;
int counter[26];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> k >> s;
    for(char ch : s) counter[ch-'A']++;

    vector<int> counts;
    for(int i = 0; i < 26; ++i) {
        if(counter[i]!=0) counts.push_back(counter[i]);
    }
    sort(counts.begin(), counts.end(), greater<int>());

    ll ans = 0;
    for(int count : counts) {
        if(count >= k) {
            ans += (ll)k*k;
            cout << ans;
            return 0;
        }
        ans += (ll)count*count;
        k -= count;
    }
    cout << ans;
}