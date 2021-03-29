#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
We need an array of pairs — in each pair we save the distance and the number of team. Then we sort the array. Then we assume that all the throws bring 3 points. Then we pass by the array and one of our numbers we decrease on 1 (which one — it depends on the second element of array). Then we compare it with our answer. In the end — we print our answer.
*/

int n, m;
vector<array<int, 2>> inp;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        inp.push_back({a, 1});
    }
    cin >> m;
    for(int i = 0, b; i < m; ++i) {
        cin >> b;
        inp.push_back({b, 2});
    }
    sort(inp.begin(), inp.end());

    int ansA = 3*n, ansB = 3*m;
    int aa = 3*n, bb = 3*m;
    int diff = aa - bb;
    for(int i = 0; i < inp.size(); ++i) {
        int t = inp[i][1];
        if(t==1) aa--;
        else bb--;
        if(aa-bb > diff) {
            diff = aa - bb;
            ansA = aa, ansB = bb;
        }
    }
    cout << ansA << ":" << ansB;
}