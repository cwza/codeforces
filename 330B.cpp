#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Since m < n/2, there exists at least one node that is not incident to any edge.
The constraints can be satisfied if and only if the graph is a star graph.
*/

int n, m;
const int maxN = 1e3;
int counter[maxN+1]; 

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> m;
    for(int i = 1, a, b; i <= m; ++i) {
        cin >> a >> b;
        counter[a]++; counter[b]++;
    }
    int center = 0;
    for(int i = 1; i <= n; ++i) {
        if(counter[i]==0) {
            center = i;
            break;
        }
    }
    cout << n-1 << "\n";
    for(int i = 1; i <= n; ++i) {
        if(i!=center) cout << center << " " << i << "\n";
    }
}