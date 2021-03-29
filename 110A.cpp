#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s;
    int n = 0;
    for(char a : s) {
        if(a == '4' || a == '7') n++;
    }
    if(n == 4 || n == 7) cout << "YES";
    else cout << "NO";
}