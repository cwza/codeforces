#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
int cb, cs, cc;
int nb, ns, nc;
int pb, ps, pc;
ll r;

bool cond(ll x) {
    return max(x*cb-nb, (ll)0)*pb + max(x*cs-ns, (ll)0)*ps + max(x*cc-nc, (ll)0)*pc > r;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> s;
    for(char ch : s) {
        if(ch=='B') cb++;
        if(ch=='S') cs++;
        if(ch=='C') cc++;
    }
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    ll l = 0, r = 1e13;
    while(l < r) {
        ll mid = l + (r-l)/2;
        if(cond(mid)) r = mid;
        else l = mid + 1;
    }
    cout << l - 1;
}