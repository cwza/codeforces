#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        if(s.size() <= 10) cout << s << "\n";
        else {
            cout << s[0] << s.size()-2 << s[s.size()-1] << "\n";
        }
    }
}