#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 100;
int inp[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; ++i) {
        cin >> inp[i];
        sum += inp[i];
    }
    sort(inp, inp+n, greater<int>());
    int target = sum/2 + 1;

    int total = 0;
    int i = 0;
    while(i<n && total+inp[i]<target) {
        total += inp[i];
        i++;
    }
    cout << i+1;
}