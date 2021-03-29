#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;

void check(unsigned long pos) {
    if(pos==string::npos) {
        cout << "NO";
        exit(0);
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s;

    auto pos = s.find_first_of('h');
    check(pos);
    pos = s.find_first_of('e', pos+1);
    check(pos);
    pos = s.find_first_of('l', pos+1);
    check(pos);
    pos = s.find_first_of('l', pos+1);
    check(pos);
    pos = s.find_first_of('o', pos+1);
    check(pos);
    cout << "YES";
}