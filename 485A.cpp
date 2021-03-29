#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, m;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> a >> m;
    set<int> s;
    while(true) {
        int rem = a % m;
        if(rem==0) {
            cout << "Yes";
            return 0;
        }
        if(s.count(rem)) {
            cout << "No";
            return 0;
        }
        s.insert(rem);
        a += rem;
    }
}