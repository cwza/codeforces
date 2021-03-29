#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Note, that you can always get the answer n–1. 
To get this result you should make first n–1 equal using the last element as the second element in pair of given operation. 
But after it, the whole array could become equal. 
It could happen if the sum of array’s elements is divisible by n. So the answer is n–1 or n.
*/

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    ll sum = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        sum += a;
    }
    if(sum%n==0) cout << n;
    else cout << n-1;
}