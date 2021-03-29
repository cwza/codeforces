#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Modified Segment Tree
*/

int N, M;
int n;

struct Node {
    int val, op;
    // op: [0: leaf, 1: or, 2: xor]
};
Node tree[1<<19];

void update(int idx, int val, int i = 1, int l = 1, int r = n) {
    if(l==r) {
        tree[i].val = val;
        tree[i].op = 0;
        return;
    }
    int mid = l + (r-l)/2;
    if(idx <= mid) update(idx, val, 2*i, l, mid);
    else update(idx, val, 2*i+1, mid+1, r);
    if(tree[2*i].op == 0 || tree[2*i].op==2) {
        tree[i].val = tree[2*i].val | tree[2*i+1].val;
        tree[i].op = 1;
    } else {
        tree[i].val = tree[2*i].val ^ tree[2*i+1].val;
        tree[i].op = 2;
    }
}

int query(int x, int y, int i = 1, int l = 1, int r = n) {
    if(y<l || x>r) {
        return 0;
    }
    if(x<=l && y>=r) {
        return tree[i].val;
    }
    int mid = l + (r-l)/2;
    int v1 = query(x, y, 2*i, l, mid);
    int v2 = query(x, y, 2*i+1, mid+1, r);
    if(tree[i].op == 1) return v1 | v2;
    else return v1 ^ v2;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> N >> M;
    n = pow(2, N);
    for(int i = 1, a; i <= n; ++i) {
        cin >> a;
        update(i, a);
    }
    while(M--) {
        int p, b;
        cin >> p >> b;
        update(p, b);
        cout << query(1, n) << "\n";
    }
}