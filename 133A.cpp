#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    string s;
    cin >> s;
    for(char ch : s) {
        if(ch == 'H' || ch == 'Q' || ch == '9') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}