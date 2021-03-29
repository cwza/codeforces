#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Greedy
In this problem you just need to implement following algorithm. Split input data into 3 vectors: first will contain negative numbers, second positive numbers, third zeroes. If size of first vector is even move one number from it to the third vector. If second vector is empty, then move two numbers from first vector to the second vector. This solution works in O(n).
*/

int n;
vector<int> g1, g2, g3;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        if(a < 0) g1.push_back(a);
        if(a > 0) g2.push_back(a);
        if(a == 0) g3.push_back(a);
    }
    if(g1.size()%2==0) {
        g3.push_back(g1.back());
        g1.pop_back();
    }
    if(g2.size()==0) {
        g2.push_back(g1.back());
        g1.pop_back();
        g2.push_back(g1.back());
        g1.pop_back();
    }
    cout << g1.size() << " ";
    for(int a : g1) cout << a << " ";
    cout << "\n";
    cout << g2.size() << " ";
    for(int a : g2) cout << a << " ";
    cout << "\n";
    cout << g3.size() << " ";
    for(int a : g3) cout << a << " ";
}