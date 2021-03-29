#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// O(n)
// int n, m;
// int main() {
//     ios::sync_with_stdio(0); 
//     cin.tie(0);
//     // freopen("input.txt", "r", stdin); 
//     // freopen("output.txt", "w", stdout);

//     cin >> n >> m;
//     int sum = (1+n)*n/2;
//     m = m % sum;

//     int total = 0;
//     for(int i = 1; i <= n; ++i) {
//         if(total+i > m) break;
//         total += i;
//     }
//     cout << m - total;
// }

// Binary Search: O(logn)
int n, m;
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m;
    int sum = (1+n)*n/2;
    m = m % sum;

    int l = 1, r = n+1;
    while(l < r) {
        int mid = l + (r-l)/2;
        if((1+mid)*mid/2 > m) r = mid;
        else l = mid + 1;
    }
    int i = l - 1;
    int total = (1+i)*i/2;
    cout << m - total;
}