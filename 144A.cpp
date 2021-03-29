#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxN = 100;
int x[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    int minValue = 100, maxValue = 1;
    for(int i = 0; i < n; ++i) {
        cin >> x[i];
        minValue = min(minValue, x[i]);
        maxValue = max(maxValue, x[i]);
    }

    int maxIdx = -1;
    for(int i = 0; i < n; ++i) {
        if(x[i] == maxValue) {
            maxIdx = i;
            break;
        }
    }
    int minIdx = -1;
    for(int i = n-1; i >= 0; --i) {
        if(x[i] == minValue) {
            minIdx = i;
            break;
        }
    }

    if(minIdx > maxIdx) {
        cout << n-1 - minIdx + maxIdx;
    } else {
        cout << n-1 - minIdx + maxIdx - 1;
    }
}