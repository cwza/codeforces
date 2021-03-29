#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Greedy
*/

int v;
int inp[11];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> v;
    int minV = 1e5+1;
    for(int i = 1; i <= 9; ++i) {
        cin >> inp[i];
        minV = min(minV, inp[i]);
    }
    int cnt = v/minV; // 确定位数
    if(cnt==0) {
        cout << -1;
        return 0;
    }
    while(cnt--) {
        for(int x = 9; x >= 1; --x) { // Try from largest
            if(v-inp[x]>=0 && (v-inp[x])/minV==cnt) { // 当前我取的数对应的值不能超过总钱，并且选了这个数后，后面的位数不能受到影响，即位数不变
                cout << x;
                v -= inp[x];
            }
        }
    }
}