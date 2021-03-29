#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s;

    int n = s.size();
    int i = 0, j = 0;
    while(i < n) {
        while(j < n && s[i]==s[j]) j++;
        if(j-i >= 7) {
            cout << "YES";
            return 0;
        }
        i = j;
    }
    cout << "NO";
}