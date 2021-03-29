#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, b, c, d;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> a >> b >> c >> d;
    int aa = max(3*a/10, a-a/250*c);
    int bb = max(3*b/10, b-b/250*d);
    if(aa > bb) cout << "Misha";
    if(aa < bb) cout << "Vasya";
    if(aa == bb) cout << "Tie";
}