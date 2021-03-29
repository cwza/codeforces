#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<int> inp;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    inp.resize(n);
    for(int i = 0; i < n; ++i) cin >> inp[i];
    vector<int> sortInp = inp;
    sort(sortInp.begin(), sortInp.end());

    int cnt = 0;
    int a, aa, b, bb;
    for(int i = 0; i < n; ++i) {
        if(inp[i]!=sortInp[i]) {
            ++cnt;
            if(cnt>2) {
                cout << "NO";
                return 0;
            }
            if(cnt==1) {
                a = inp[i];
                aa = sortInp[i];
            }
            if(cnt==2) {
                b = inp[i];
                bb = sortInp[i];
            }
        }
    }
    if(cnt==0) {
        cout << "YES";
        return 0;
    }
    if(a==bb && b==aa) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
}