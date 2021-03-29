#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
4
1 16 2 15 
3 14 4 13 
5 12 6 11 
7 10 8 9 

6
1 36 2 35 3 34 
4 33 5 32 6 31 
7 30 8 29 9 28 
10 27 11 26 12 25 
13 24 14 23 15 22 
16 21 17 20 18 19 
*/

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    for(int i = 1; i <= n*n/2; ++i) {
        cout << i << " " << n*n+1-i << " ";
        if(i%(n/2)==0) cout << "\n";
    }
}