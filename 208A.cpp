#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> s;
    // Replace WUB by Space
    int idx;
    while((idx = s.find("WUB"))!=string::npos) {
        s.replace(idx, 3, " ");
    }

    int start = 0, end = 0;
    while(true) {
        start = s.find_first_not_of(" ", end);
        if(start==string::npos) break;
        end = s.find_first_of(" ", start);
        if(end==string::npos) end = s.size();
        cout << s.substr(start, end-start) << " ";
    }
}