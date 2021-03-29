#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s1, s2;
const int maxN = 10;
int choose[maxN+1][maxN+1];

void calcChoose() {
    choose[0][0] = 1;
    for(int i = 0; i <= maxN-1; ++i) {
        for(int j = 0; j <= i; ++j) {
            choose[i+1][j] += choose[i][j];
            choose[i+1][j+1] += choose[i][j];
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> s1 >> s2;

    int cPos = 0, cNeg = 0;
    for(char ch : s1) {
        if(ch=='+') cPos++;
        else cNeg++;
    }
    for(char ch : s2) {
        if(ch=='+' && cPos>0) cPos--;
        else if(ch=='-' &&cNeg>0) cNeg--;
        else if(ch=='?') continue;
        else {
            cout << 0;
            return 0;
        }
    }
    calcChoose();
    int n = cPos+cNeg, k = cPos;
    cout.precision(10);
    cout << pow(0.5, n) * choose[n][k];
}