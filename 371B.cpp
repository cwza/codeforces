#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
let a = x * 2^a1 * 3^a2 * 5^a3
    b = y * 2^b1 * 3^b2 * 5^b3
if x != y then cout << -1;
ans = abs(a1-b1) + abs(a2-b2) + abs(a3-b3)
*/

int a, b;

array<int, 4> helper(int x) {
    array<int, 4> ans = {0};
    while(x%2==0) {
        x = x/2;
        ans[1]++;
    }
    while(x%3==0) {
        x = x/3;
        ans[2]++;
    }
    while(x%5==0) {
        x = x/5;
        ans[3]++;
    }
    ans[0] = x;
    return ans;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> a >> b;
    auto aa = helper(a);
    auto bb = helper(b);
    if(aa[0]!=bb[0]) {
        cout << -1;
        return 0;
    }
    cout << abs(aa[1]-bb[1])+abs(aa[2]-bb[2])+abs(aa[3]-bb[3]);
}