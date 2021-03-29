#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<array<int, 2>> bombs;
vector<string> ans;

bool cmp(array<int, 2> &a, array<int, 2> &b) {
    return abs(a[0])+abs(a[1]) < abs(b[0])+abs(b[1]);
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    bombs.resize(n);
    for(int i = 0, a, b; i < n; ++i) {
        cin >> a >> b;
        bombs[i] = {a, b};
    }
    sort(bombs.begin(), bombs.end(), cmp);

    for(auto [x, y] : bombs) {
        vector<string> backs;
        if(x > 0) {
            ans.push_back("1 "+to_string(x)+" R");
            backs.push_back("1 "+to_string(x)+" L");
        }
        if(y > 0) {
            ans.push_back("1 "+to_string(y)+" U");
            backs.push_back("1 "+to_string(y)+" D");
        }
        if(x < 0) {
            ans.push_back("1 "+to_string(-x)+" L");
            backs.push_back("1 "+to_string(-x)+" R");
        }
        if(y < 0) {
            ans.push_back("1 "+to_string(-y)+" D");
            backs.push_back("1 "+to_string(-y)+" U");
        }
        ans.push_back("2");
        for(string s : backs) ans.push_back(s);
        ans.push_back("3");
    }
    cout << ans.size() << "\n";
    for(string s : ans) cout << s << "\n";
}