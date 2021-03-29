#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


// SolutionI: Brute Force O(n^3), OK because N = 100
// int main() {
//     ios::sync_with_stdio(0); 
//     cin.tie(0);
//     // freopen("input.txt", "r", stdin); 
//     // freopen("output.txt", "w", stdout);

//     int n;
//     cin >> n;
//     int inp[n];
//     for(int i = 0; i < n; ++i) cin >> inp[i];

//     int ans = 0;
//     for(int i = 0; i < n; ++i) {
//         for(int j = i; j < n; ++j) {
//             for(int k = i; k <= j; ++k) {
//                 inp[k] = 1 - inp[k];
//             }
//             ans = max(ans, accumulate(inp, inp+n, 0));
//             for(int k = i; k <= j; ++k) {
//                 inp[k] = 1 - inp[k];
//             }
//         }
//     }
//     cout << ans;
// }

/*
Solution2: DP, O(n)
as = [1, 0, 0, 1]
Generate bs = [-1, 1, 1, -1] that is 0->1, 1->-1. (Because if you flip 1 you will lose 1, if you flip 0 you will gain 1)
Sum of bs[i] to bs[j] = The point you can gain if you flip from i to j.
Answer = The subsequence of maximal sum in bs(maximal gain after flip) + The number of 1 in as(origianal score)
Use DP to find the subsequence of maximal sum in bs
*/
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int bs[n];
    int count1 = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        if(a==0) bs[i] = 1;
        if(a==1) {
            bs[i] = -1;
            count1++;
        }
    }

    // DP to find the subsequence of maximal sum in bs
    for(int i = 1; i < n; ++i) {
        bs[i] = max(bs[i], bs[i-1]+bs[i]);
    }
    int sms = *max_element(bs, bs+n);

    cout << count1 + sms;
}
