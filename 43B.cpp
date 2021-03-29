#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s1, s2;
int counter[128];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    getline(cin, s1);
    getline(cin, s2);
    for(char ch : s1) counter[(int)ch]++;
    for(char ch : s2) {
        if(ch == ' ') continue;
        counter[(int)ch]--;
        if(counter[(int)ch] < 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}