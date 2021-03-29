#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Note that the k-th element is copied to the end. Then the (k+1)-th element from the initial sequence is copied, then (k+2)-th, … , n-th, k-th, (k+1)-th, etc. 
So all the numbers on the blackboard will become equal if and only if all the numbers from the k-th to the n-th in the initial sequence were equal. 
It's now also obvious that the number of operations needed for it is equal to the index of the last number that is not equal to the n-th element of the initial sequence, because it's exactly the number of deletions needed to eliminate the elements that are not equal to the last one. 
If this number is greater than k, than answer is -1. Complexity — O(n).
*/

int n, k;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> k;
    int inp[n+1];
    for(int i = 1; i <= n; ++i) cin >> inp[i];
    int i = n, j = n;
    while(j>=1 && inp[i]==inp[j]) j--; 
    if(k > j) cout << j;
    else cout << -1;
}