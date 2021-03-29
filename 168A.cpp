#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Brute Force O(10^6)
/*
Find the min i that satisfies: 100*(x+i)/n >= y

The max i to try is 10^6-1
100*(x+i)/n >= y
i >= (y*n)/100-x  (1 <= n, x, y <= 10^4)
i >= 10^6 - 1
*/
// int n, x, y;
// int main() {
//     ios::sync_with_stdio(0); 
//     cin.tie(0);
//     // freopen("input.txt", "r", stdin); 
//     // freopen("output.txt", "w", stdout);

//     cin >> n >> x >> y;
//     for(int i = 0; ; ++i) {
//         int val = 100*(x+i)/n;
//         if(val >= y) {
//             cout << i;
//             return 0;
//         }
//     }
// }

// Binary Search
int n, x, y;
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> x >> y;

    int l = 0, r = 1e6;
    while(l < r) {
        int mid = l + (r-l)/2;
        if(100*(x+mid)/n >= y) r = mid;
        else l = mid + 1;
    }
    cout << l;
}