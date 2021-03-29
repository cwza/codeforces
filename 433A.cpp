#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Denote G as the sum of the weight of the apples. If G / 100 is not an even number, then the answer is obviously "NO". Otherwise, we need to check if there is a way of choosing apples, so that the sum of the weight of the chosen apples is exactly G/2.
A simple O(n) approach would be to enumerate how many 200-gram apples do we choose, and check if we can fill the rest with 100-gram apples. We can also solve this problem using a classic knapsack DP.
*/

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    int c100 = 0, c200 = 0, total = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        total += a;
        if(a == 100) c100++;
        if(a == 200) c200++;
    }
    int half = total/2;

    for(int i = 0; i <= c200; ++i) {
        int remain = half - 200*i;
        if(remain < 0) break;
        if(remain%100==0 && remain/100 <= c100) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}