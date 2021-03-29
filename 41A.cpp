#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s1, s2;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s1 >> s2;
    reverse(s2.begin(), s2.end());
    if(s1==s2) cout << "YES";
    else cout << "NO";
}