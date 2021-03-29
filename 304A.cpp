#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
loop over a, b, then c is sqrt(a^2+b^2)
if this c <= n and this c is integer then we found one.
How to check c is integer not float??
1. 
    int c = sqrt(a*a+b*b)
    if(a*a+b*b=c*c) then this c is integer
2. 
double c = sqrt(a*a+b*b)
double floatpart = modf(c, &intpart);
if(floatpart==0.0) then this c is integer
*/

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;

    int ans = 0;
    for(int a = 1; a <= n; ++a) {
        for(int b = a+1; b <= n; ++b) {
            int c = sqrt(a*a+b*b);
            // double intpart;
            // double floatpart = modf(c, &intpart);
            // if(c <= n && floatpart==0.0) ans++;
            if(a*a+b*b==c*c && c <= n) ans++;
        }
    }
    cout << ans;
}