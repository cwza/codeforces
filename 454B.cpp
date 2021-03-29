#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<int> inp;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    inp.resize(n);
    int minV = 1e5+1;
    for(int i = 0; i < n; ++i) {
        cin >> inp[i];
        minV = min(minV, inp[i]);
    }
    int minI = -1;
    for(int i = n-1; i >= 0; --i) {
        if(inp[i]==minV) {
            int j = i;
            while(j>=0 && inp[i]==inp[j]) j--;
            minI = j+1;
            break;
        }
    }

    for(int i = 0; i < minI-1; ++i) {
        if(inp[i+1]<inp[i]) {
            cout << -1;
            return 0;
        };
    }
    for(int i = minI+1; i < n-1; ++i) {
        if(inp[i+1]<inp[i]) {
            cout << -1;
            return 0;
        }
    }
    if(minI==0) {
        cout << 0;
        return 0;
    }
    if(inp[n-1] > inp[0]) {
        cout << -1;
        return 0;
    }
    cout << n-minI;
}