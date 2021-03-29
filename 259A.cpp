#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    for(int i = 0; i < 8; ++i) {
        string s;
        cin >> s;
        if(s != "WBWBWBWB" && s != "BWBWBWBW") {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}