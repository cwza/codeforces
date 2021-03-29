#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// last maximum ceil(ai / m).
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int mc = 0;
    int ans = -1;
    for(int i = 1, a; i <= n; ++i) {
        cin >> a;
        int c = ceil((double)a/m);
        if(c >= mc) {
            mc = c;
            ans = i;
        }
    }
    cout << ans;
}

// Similation
// int main() {
//     ios::sync_with_stdio(0); 
//     cin.tie(0);

//     int n, m;
//     cin >> n >> m;
//     deque<array<int, 2>> d; // [(value, idx)]
//     for(int i = 1, a; i <= n; ++i) {
//         cin >> a;
//         d.push_back({a, i});
//     }

//     while(d.size() > 1) {
//         if(m >= d.front()[0]) {
//             d.pop_front();
//         } else {
//             d.push_back({d.front()[0] - m, d.front()[1]});
//             d.pop_front();
//         }
//     }
//     cout << d.front()[1];
// }