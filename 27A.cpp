#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Brute Force, Each Find: O(n)
// int n;
// const int maxN = 3000;
// bool visited[maxN+1];

// int main() {
//     ios::sync_with_stdio(0); 
//     cin.tie(0);
//     // freopen("input.txt", "r", stdin); 
//     // freopen("output.txt", "w", stdout);

//     cin >> n;
//     for(int i = 0, a; i < n; ++i) {
//         cin >> a;
//         visited[a] = true;
//     }

//     for(int i = 1; i <= maxN; ++i) {
//         if(!visited[i]) {
//             cout << i;
//             return 0;
//         }
//     }
//     cout << 3001;
// }

// Binary Search, Each Find: O(logn)
int n;
const int maxN = 3000;
int prefixVis[maxN+1];
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    for(int i = 1, a; i <= n; ++i) {
        cin >> a;
        prefixVis[a] = 1;
    }
    for(int i = 2; i <= n; ++i) prefixVis[i] += prefixVis[i-1];

    int l = 1, r = 3001;
    while(l < r) {
        int mid = l + (r-l)/2;
        if(mid>prefixVis[mid]) r = mid;
        else l = mid + 1;
    }
    cout << l;
}