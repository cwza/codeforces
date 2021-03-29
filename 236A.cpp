#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
bool exist[26];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s;
    for(int i = 0; i < s.size(); ++i) {
        if(exist[s[i]-'a']) continue;
        exist[s[i]-'a'] = true;
    }
    int num = 0;
    num = accumulate(exist, exist+26, 0);
    if(num%2==0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}