#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

/*
Just like the Topological Sort by BFS
XOR Sum Property: x = a ^ b ^ c then x ^ b = a ^ c
*/

int n;
const int maxN = 2<<16;
int xss[maxN];
int degs[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    for(int i = 0, deg, xs; i < n; ++i) {
        cin >> deg >> xs;
        xss[i] = xs;
        degs[i] = deg;
    } 
    queue<int> q;
    for(int i = 0; i < n; ++i) {
        if(degs[i]==1) q.push(i);
    }

    vector<ar<int, 2>> ans;
    while(q.size()) {
        int sz = q.size();
        for(int j = 0; j < sz; ++j) {
            int i = q.front(); q.pop();
            if(degs[i]==0) continue;
            int p = xss[i];
            ans.push_back({i, p});
            degs[p]--;
            xss[p] ^= i;
            if(degs[p]==1) q.push(p);
        }
    }
    cout << ans.size() << "\n";
    for(auto [u, v] : ans) cout << u << " " << v << "\n";
}

 
// int n;
// const int maxN = 2<<16;
// int xss[maxN];
// int degs[maxN];
// bool vis[maxN];
 
// int main() {
//     ios::sync_with_stdio(0); 
//     cin.tie(0);
//     // freopen("input.txt", "r", stdin); 
//     // freopen("output.txt", "w", stdout);
//     cin >> n;
//     priority_queue<ar<int, 2>, vector<ar<int, 2>>, greater<ar<int, 2>>> pq; // (degree, i)
//     for(int i = 0, deg, xs; i < n; ++i) {
//         cin >> deg >> xs;
//         xss[i] = xs;
//         degs[i] = deg;
//         pq.push({deg, i});
//     } 
//     vector<ar<int, 2>> ans;
//     while(pq.size()) {
//         auto [deg, i] = pq.top(); pq.pop();
//         if(vis[i]) continue;
//         vis[i] = true;
//         if(deg==0) continue;
//         int p = xss[i];
//         ans.push_back({i, p});
//         xss[p] ^= i;
//         degs[p]--;
//         pq.push({degs[p], p});
//     }
//     cout << ans.size() << "\n";
//     for(auto [u, v] : ans) cout << u << " " << v << "\n";
// }