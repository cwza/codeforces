#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
0 <= s(x) <= 81
*/
int a, b, c;

int S(int x) {
    int ans = 0;
    while(x) {
        ans += x % 10;
        x = x / 10;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> a >> b >> c;
    vector<int> ans;
    for(int sx = 0; sx <= 81; ++sx) {
        int x = b*pow(sx, a)+c;
        if(sx==S(x) && x > 0 && x < 1e9) ans.push_back(x);
    }
    cout << ans.size() << "\n";
    for(int a : ans) cout << a << " ";
}