#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int n;
    cin >> n;
    int x = 0;
    while(n--) {
        string s;
        cin >> s;
        if(s=="++X" || s=="X++") x++;
        else x--;
    }
    cout << x;
}