#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    int orange = 0;
    int total = 0;
    while(n--) {
        int a;
        cin >> a;
        orange += a;
        total += 100;
    }
    cout << (double)orange/total * 100;
}