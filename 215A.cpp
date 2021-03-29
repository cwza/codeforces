#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
const int maxN = 50, maxM = 50;
int as[maxN], bs[maxM];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> as[i];
    cin >> m;
    for(int i = 0; i < m; ++i) cin >> bs[i];

    int maxValue = 0;
    int count = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(bs[j] % as[i] == 0) {
                if(bs[j]/as[i] > maxValue) {
                    maxValue = bs[j]/as[i];
                    count = 1;
                } else if(bs[j]/as[i] == maxValue) {
                    count++;
                }
            }
        }
    }
    cout << count;
}