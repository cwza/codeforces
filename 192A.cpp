#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
set<int> triangulars;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    int maxK = ceil(sqrt(2*n));
    for(int i = 1; i <= maxK; ++i) {
        int tri = i*(i+1)/2;
        triangulars.insert(tri);
    }

    for(int tri : triangulars) {
        if(n-tri<=0) break;
        if(triangulars.count(n-tri)) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}