#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s1, s2;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s1 >> s2;
    if(s1.size() != s2.size()) {
        cout << "NO";
        return 0;
    }

    int numdiff = 0;
    char s1diff1 = 0, s1diff2 = 0;
    char s2diff1 = 0, s2diff2 = 0;
    for(int i = 0; i < s1.size(); ++i) {
        if(s1[i] != s2[i]) {
            numdiff++;
            if(numdiff==1) {
                s1diff1 = s1[i];
                s2diff1 = s2[i];
            } else if(numdiff==2) {
                s1diff2 = s1[i];
                s2diff2 = s2[i];
            }
        }
    }
    if(numdiff != 2) {
        cout << "NO";
        return 0;
    }
    if(s1diff1==s2diff2 && s1diff2==s2diff1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}