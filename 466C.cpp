#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Immediately, we see that such a split is only possible if the sum of numbers in the array is a multiple of three. Let is be 3S. Then we want to find the number of ways to split the array into three such that the prefix sum up to the first split is S and the prefix sum up to the second split is 2S.

It is enough to scan the array once, keep the count of how many positions with a prefix sum S have been found till now and increment the answer with that value when a prefix sum of 2S is reached.

The implementation is pretty straightforward
*/

int n;
vector<ll> inp;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    inp.resize(n);
    ll total = 0;
    for(int i = 0; i < n; ++i) {
        cin >> inp[i];
        total += inp[i];
    }
    if(n<3 || total%3!=0) {
        cout << 0;
        return 0;
    }

    ll S = total/3;
    ll prefix = 0, cntS = 0;
    ll ans = 0;
    for(int i = 0; i < n-1; ++i) {
        prefix += inp[i];
        if(prefix==2*S) ans += cntS;
        if(prefix==S) cntS++;
    }
    cout << ans;
}