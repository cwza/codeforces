#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s;

    int cUpper = 0, cLower = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(islower(s[i])) cLower++;
        else if(isupper(s[i])) cUpper++;
    }
    if(cUpper > cLower) {
        for(int i = 0; i < s.size(); ++i) {
            s[i] = toupper(s[i]);
        }
    } else {
        for(int i = 0; i < s.size(); ++i) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
}