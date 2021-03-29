#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    int x = sqrt(b*c/a);
    int y = sqrt(a*c/b);
    int z = sqrt(a*b/c);

    cout << x*4 + y*4 + z*4;
}