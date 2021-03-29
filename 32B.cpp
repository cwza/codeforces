#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s;
    int i = 0;
    string ans = "";
    while(i < s.size()) {
        if(s[i] == '.') {
            ans.push_back('0');
            i++;
        } else {
            if(s[i+1] == '.') {
                ans.push_back('1');
            } else {
                ans.push_back('2');
            }
            i += 2;
        }
    }
    cout << ans;
}