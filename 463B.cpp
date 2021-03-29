#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    int ans = 0;
    int energy = 0;
    int curH = 0;
    for(int i = 0, h; i < n; ++i) {
        cin >> h;
        if(curH-h >= 0) {
            energy += curH-h;
        } else if(energy >= h-curH){
            energy -= h-curH;
        } else {
            ans += h-curH-energy;
            energy = 0;
        }
        curH = h;
    }
    cout << ans;
}