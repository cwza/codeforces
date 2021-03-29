#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int y;

bool isdistinct(int y) {
    bool check[10] = {0};
    while(y) {
        int r = y % 10;
        if(check[r]) return false;
        check[r] = true;
        y = y / 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> y;
    while(true) {
        y++;
        if(isdistinct(y)) {
            cout << y;
            return 0;
        }
    }
}