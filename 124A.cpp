#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a, b;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> a >> b;
    cout << min(n-a, b+1);
}