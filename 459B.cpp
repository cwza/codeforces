#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    int maxValue = 0, minValue = 1e9+1;
    int maxCount = 0, minCount = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        if(a > maxValue) {
            maxValue = a;
            maxCount = 1;
        }
        else if(a == maxValue) {
            maxCount++;
        }
        if(a < minValue) {
            minValue = a;
            minCount = 1;
        }
        else if(a == minValue) {
            minCount++;
        }
    }
    int ans1 = maxValue - minValue;
    ll ans2 = 0;
    if(maxValue != minValue) ans2 = (ll)maxCount * minCount;
    else ans2 = ((ll)maxCount*(maxCount-1))/2;
    cout << ans1 << " " << ans2;
}