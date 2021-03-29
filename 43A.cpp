#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n;
    map<string, int> m;
    string ans;
    int maxValue = 0;
    for(int i = 0; i < n; ++i) {
        string name;
        cin >> name;
        m[name]++;
        if(m[name] > maxValue) {
            maxValue = m[name];
            ans = name;
        }
    } 
    cout << ans;
}