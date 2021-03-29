#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
If there are no "mixing bouquet" then the answer will be r/3 + g/3 + b/3. One important observation is that: There always exist an optimal solution with less than 3 mixing bouquet.

The proof is here: Once we get 3 mixing bouquet, we can change it to (1 red bouquet + 1 green bouquet + 1 blue bouquet)

So we can try 0, 1, 2 mixing bouquet and make the remain 3 kind of bouquets use above greedy method. Output one with largest outcome.
*/

int r, g, b;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> r >> g >> b;

    int ans0 = r/3 + g/3 + b/3; // 0 mixing
    int ans1 = 0;
    if(r>=1 && g>=1 && b>=1) ans1 = 1 + (r-1)/3 + (g-1)/3 + (b-1)/3; // 1 mixing
    int ans2 = 0;
    if(r>=2 && g>=2 && b>=2) ans2 = 2 + (r-2)/3 + (g-2)/3 + (b-2)/3; // 2 mixing
    cout << max(max(ans0, ans1), ans2);
}