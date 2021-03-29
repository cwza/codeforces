#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Let's denote the sum of numbers on the upper halves of pieces as s1, and the sum on the lower halves — s2. If this sums are even, than the answer is obviously 0. Note, that if the numbers on both halves of piece have the same parity, than parity of s1 and s2 won't change after rotation this piece. If the numbers on halves have different parity, than parities of both s1 and s2 will change after rotation. Therefore, if s1 and s2 have different parities, than the answer is  - 1. If both s1 and s2 are odd, than we should check, if there is a piece with numbers of different parities. If so, the answer is 1, otherwise, the answer is  - 1.
*/

int n;
const int maxN = 100;
int ls[maxN], rs[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    int suml = 0, sumr = 0;
    for(int i = 0; i < n; ++i) {
        cin >> ls[i];
        suml += ls[i];
        cin >> rs[i];
        sumr += rs[i];
    }
    if(suml%2==0 && sumr%2==0) {
        cout << 0;
        return 0;
    }
    if((suml%2==1 && sumr%2==0) || (suml%2==0 && sumr%2==1)) {
        cout << -1;
        return 0;
    }
    for(int i = 0; i < n; ++i) {
        if((ls[i]%2==0 && rs[i]%2==1) || (ls[i]%2==1 && rs[i]%2==0)) {
            cout << 1;
            return 0;
        }
    }
    cout << -1;
}