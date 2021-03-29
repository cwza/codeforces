#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Consider all supplementary angles of the regular n-polygon with angle a, which are equal to 180 - a.
Their sum is equal to 360, because the polygon is convex.
=> n * (180-a) = 360
=> 360 % (180-a) == 0
*/

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    while(n--) {
        int a;
        cin >> a;
        if(360%(180-a)==0) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}