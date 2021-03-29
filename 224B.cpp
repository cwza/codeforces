#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> k;
    int inp[n];
    for(int i = 0; i < n; ++i) cin >> inp[i];
    map<int, int> counter;
    int i = 0, j = 0;
    while(j<n && counter.size()<k) {
        counter[inp[j]]++;
        j++;
    }
    j--;
    if(counter.size()<k) {
        cout << -1 << " " << -1;
        return 0;
    }
    while(i<=j && counter.size()>=k) {
        counter[inp[i]]--;
        if(counter[inp[i]]==0) {
            counter.erase(inp[i]);
        }
        i++;
    }
    cout << i << " " << j+1;
}