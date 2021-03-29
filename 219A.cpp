#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int k;
string s;
int counter[26];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> k >> s;
    for(char ch : s) {
        counter[ch-'a']++;
    }

    string ans = "";
    for(int i = 0; i < 26; ++i) {
        if(counter[i]!=0 && counter[i]%k!=0) {
            cout << -1;
            return 0;
        }
        if(counter[i]%k==0) {
            ans += string(counter[i]/k, i+'a');
        }
    }

    for(int i = 0; i < k; ++i) cout << ans;
}