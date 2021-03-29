#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s;
    string ans = "";
    for(char ch : s) {
        ch = tolower(ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y') continue;
        ans += ".";
        ans += ch;
    }
    cout << ans;
}