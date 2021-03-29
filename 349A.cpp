#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    int count25 = 0, count50 = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        if(a==25) {
            count25++;
        } else if(a==50) {
            if(count25 >= 1) {
                count25--;
                count50++;
            } else {
                cout << "NO";
                return 0;
            }
        } else {
            if(count50 >= 1 && count25 >= 1) {
                count50--;
                count25--;
            } else if(count25 >=3) {
                count25 -= 3;
            } else {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}