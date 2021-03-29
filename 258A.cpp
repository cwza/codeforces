#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s;
    int idx = -1;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i]=='0') {
            idx = i;
            break;
        }
    }
    if(idx == -1) {
        s.pop_back();
        cout << s;
    } else {
        s.erase(idx, 1);
        cout << s;
    }
}