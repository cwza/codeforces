#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int inp[8];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    for(int i = 1; i <= 7; ++i) cin >> inp[i];

    while(true) {
        for(int i = 1; i <= 7; ++i) {
            if(n-inp[i] <= 0) {
                cout << i;
                return 0;
            }
            n -= inp[i];
        }
    }
}