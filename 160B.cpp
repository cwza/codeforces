#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    cin >> s;
    sort(s.begin(), s.begin()+n);
    sort(s.begin()+n, s.end());

    bool ok = true;
    for(int i = 0; i < n; ++i) {
        if(s[i] < s[i+n]) continue;
        else {
            ok = false;
            break;
        }
    }
    if(ok) {
        cout << "YES";
        return 0;
    }
    ok = true;
    for(int i = n-1; i >= 0; --i) {
        if(s[i] > s[i+n]) continue;
        else {
            ok = false;
            break;
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
}