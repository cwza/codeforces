#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Based on the "school" property of the divisibility by eight — number can be divided by eight if and only if its last three digits form a number that can be divided by eight. Thus, it is enough to test only numbers that can be obtained from the original one by crossing out and that contain at most three digits (so we check only all one-digit, two-digit and three-digit numbers). This can be done in O(len^3) with three nested loops (here len is the length of the original number).
*/

string n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;

    for(int i = 0; i < n.size(); ++i) {
        int v = n[i]-'0';
        if(v%8==0) {
            cout << "YES\n";
            cout << v;
            return 0;
        }
        for(int j = i+1; j < n.size(); ++j) {
            int v = 10*(n[i]-'0') + (n[j]-'0');
            if(v%8==0) {
                cout << "YES\n";
                cout << v;
                return 0;
            }
            for(int k = j+1; k < n.size(); ++k) {
                int v = 100*(n[i]-'0') + 10*(n[j]-'0') + n[k]-'0';
                if(v%8==0) {
                    cout << "YES\n";
                    cout << v;
                    return 0;
                }
            }
        }
    }
    cout << "NO";
}