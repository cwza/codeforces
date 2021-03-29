#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Segment Tree with Propagation
*/
// int n, m;
// const ll ninf = -1e18;

// struct node {
//     ll mn, lz;
//     bool mark;
// };
// node tree[1<<19];

// void apply(int i, ll val, bool mark, int l, int r) {
//     // update value and lazy
//     if(mark) {
//         tree[i].mn = val;
//         tree[i].lz = val;
//         tree[i].mark = true;
//     } 
// }

// void push(int i, int l, int mid, int r) {
//     // propagate from parent to children
//     apply(2*i, tree[i].lz, tree[i].mark, l, mid);
//     apply(2*i+1, tree[i].lz, tree[i].mark, mid+1, r);
//     tree[i].lz = 0;
//     tree[i].mark = false;
// }


// void update(int x, int y, ll val, int i = 1, int l = 1, int r = n) {
//     if(x > r || y < l) { // [x, y] completely not overlap with [l, r]
//         return;
//     }
//     if(x <= l && y >= r) { // [x, y] completely cover [l, r]
//         // Update value and lazy
//         apply(i, val, true, l, r);
//         return;
//     }
//     // [x, y] partially overlap with [l, r]
//     int mid = l + (r-l)/2;
//     push(i, l, mid, r); // Propagate
//     update(x, y, val, 2*i, l, mid);
//     update(x, y, val, 2*i+1, mid+1, r); 
//     tree[i].mn = max(tree[2*i].mn, tree[2*i+1].mn);
// }

// ll query(int x, int y, int i = 1, int l = 1, int r = n) {
//     if(x > r || y < l) { // [x, y] completely not overlap with [l, r]
//         return ninf;
//     }
//     if(x <= l && y >= r) { // [x, y] completely cover [l, r]
//         return tree[i].mn;
//     }
//     // [x, y] partially overlap with [l, r]
//     int mid = l + (r-l)/2;
//     push(i, l, mid, r); // Propagate
//     ll v1 = query(x, y, 2*i, l, mid);
//     ll v2 = query(x, y, 2*i+1, mid+1, r);
//     return max(v1, v2);
// }

// int main() {
//     ios::sync_with_stdio(0); 
//     cin.tie(0);
//     // freopen("input.txt", "r", stdin); 
//     // freopen("output.txt", "w", stdout);

//     cin >> n;
//     for(int i = 1, a; i <= n; ++i) {
//         cin >> a;
//         update(i, i, a);
//     }
//     cin >> m;
//     while(m--) {
//         int w, h;
//         cin >> w >> h;
//         ll mn = query(1, w);
//         cout << mn << "\n";
//         update(1, w, mn+h);
//     }
// }

int n, m;
const int maxN = 1e5;
ll inp[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> inp[i];
    cin >> m;

    ll curMax = 0;
    while(m--) {
        int w, h;
        cin >> w >> h;
        ll ans = max(curMax, inp[w]);
        cout << ans << "\n";
        curMax = ans + h;
    }
}