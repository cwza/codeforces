#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, b;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> a >> b;
    int c = a + b;
    string stringA = to_string(a), stringB = to_string(b), stringC = to_string(c);
    int idx;
    while((idx = stringA.find_first_of("0"))!=string::npos) stringA.erase(idx, 1);
    while((idx = stringB.find_first_of("0"))!=string::npos) stringB.erase(idx, 1);
    while((idx = stringC.find_first_of("0"))!=string::npos) stringC.erase(idx, 1);
    a = stoi(stringA), b = stoi(stringB), c = stoi(stringC);
    int cc = a + b;
    if(c==cc) cout << "YES";
    else cout << "NO";
}