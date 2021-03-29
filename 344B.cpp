#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Suppose the answer is x, y, z, so we need to find x, y, z such that 
x + y = b
y + z = c
x + z = a
=> x + y + z = (a+b+c)/2
=> x = (a+b+c)/2 - c
=> y = (a+b+c)/2 - a
=> z = (a+b+c)/2 - b
*/

int a, b, c;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> a >> b >> c;
    int sum = a + b + c;
    if(sum%2!=0) {
        cout << "Impossible";
        return 0;
    }
    int x = sum/2 - c;
    int y = sum/2 - a;
    int z = sum/2 - b;
    if(x < 0 || y < 0 || z < 0) {
        cout << "Impossible";
        return 0;
    }
    cout << x << " " << y << " " << z;
}