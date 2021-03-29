#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); ++i) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    int a = s1.compare(s2);
    if(a < 0) {
        cout << -1;
    } else if(a==0) {
        cout << 0;
    } else {
        cout << 1;
    }
}