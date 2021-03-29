#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
const int maxA = 1000;
int counter[maxA+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    for(int i = 1, a; i <= n; ++i) {
        cin >> a;
        counter[a]++;
    }

    int totalCount = 0;
    int maxCount = 0;
    for(int i = 1; i <= maxA; ++i) {
        totalCount += counter[i];
        maxCount = max(maxCount, counter[i]);
    }
    int remainCount = totalCount - maxCount;

    if(maxCount - remainCount >= 2) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}