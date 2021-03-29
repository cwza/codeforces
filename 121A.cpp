#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> luckies = {4, 7};

void createLuckies() {
    int start = 0, end = luckies.size();
    while(luckies.back() < 1e9) {
        for(int i = start; i < end; ++i) {
            luckies.push_back(luckies[i]*10+4);
            luckies.push_back(luckies[i]*10+7);
        }
        start = end;
        end = luckies.size();
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    createLuckies();
    int l, r;
    cin >> l >> r;

    int i = 0;
    while(i < luckies.size() && luckies[i] < l) i++;
    ll ans = 0;
    if(luckies[i] >= r) ans = (r-l+1)*luckies[i];
    else ans = (luckies[i]-l+1)*luckies[i];
    int j = i + 1;
    while(j < luckies.size() && luckies[j] <= r){
        ans += (luckies[j]-luckies[j-1])*luckies[j];
        j++;
    }
    if(r > luckies[j-1]) ans += (r-luckies[j-1])*luckies[j];
    cout << ans;
}