#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
int m;
const int maxN = 1e5;
int prefix[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> s;
    for(int i = 0; i < s.size()-1; ++i) {
        if(s[i]==s[i+1]) prefix[i+1] = prefix[i] + 1;
        else prefix[i+1] = prefix[i];
    }
    cin >> m;
    while(m--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r-1] - prefix[l-1] << "\n";
    }
}