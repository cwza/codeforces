#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int luckys[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    for(int lucky : luckys) {
        if(n%lucky==0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}