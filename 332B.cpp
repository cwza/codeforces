#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Let’s build the array of partial sums, which will permit to find the sum in any segment of the array in O(1). 
Let's iterate through the number a (the left edge of the leftmost segment) in descending order. 
Now we need to find among segments of length k, starting from position which index is greater than or equal to a + k, a segment with the maximum sum. 
Since we search a in descending order, we can maintain this segment during the transition from a to a - 1.
*/

int n, k;
const int maxN = 2e5;
int inp[maxN+1];
ll prefix[maxN+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> k;
    for(int i = 1; i <= n; ++i) {
        cin >> inp[i];
        prefix[i] = prefix[i-1] + inp[i];
    }

    int maxB1, maxB2;
    ll maxB = 0;
    ll maxAll = 0;
    int ansA1, ansA2, ansB1, ansB2;
    for(int a1 = n-2*k+1; a1 >= 1; --a1) {
        int a2 = a1 + k - 1;
        ll a = prefix[a2] - prefix[a1-1];
        int b1 = a2 + 1;
        int b2 = b1 + k - 1;
        ll b = prefix[b2] - prefix[b1-1];
        if(b >= maxB) {
            maxB = b;
            maxB1 = b1;
            maxB2 = b2;
        }
        if(a+maxB >= maxAll) {
            maxAll = a + maxB;
            ansA1 = a1;
            ansA2 = a2;
            ansB1 = maxB1;
            ansB2 = maxB2;
        }
    }
    cout << ansA1 << " " << ansB1;
}