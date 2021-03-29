#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
This one can be solved by a greedy algorithm. Start from the 1st egg and each time give the egg to A if and only if giving it to A doesn't make the difference > 500, otherwise give it to G.
*/

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    int curA = 0, curG = 0;
    string ans;
    for(int i = 0, a, g; i < n; ++i) {
        cin >> a >> g;
        if(abs(curA+a-curG)<=500) {
            ans += "A";
            curA += a;
        } else {
            ans += "G";
            curG += g;
        }
        if(abs(curA-curG) > 500) {
            cout << -1;
            return 0;
        }
    }
    cout << ans;
}