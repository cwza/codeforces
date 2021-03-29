#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, t;
string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> t >> s;

    while(t--) {
        int i = 0;
        while(i < n-1) {
            if(s[i] == 'B' && s[i+1] == 'G') {
                swap(s[i], s[i+1]);
                i += 2;
            } else {
                i++;
            }
        }
    }
    cout << s;
}