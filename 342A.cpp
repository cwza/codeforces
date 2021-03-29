#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
The only valid group are
[1, 2, 4], [1, 2, 6], [1, 3, 6]

Then we do greedy choose.
1. assign 3 to empty group
2. assign 4 to empty group
3. assign 2 to those group which already have 4
4. assign 6 to those group which already have 3
5. assign remaining 2 and 6 to empty group
6. assign 1 to all group
7. if there are others that not be assigned then print -1
*/

int n;
int counter[8];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        counter[a]++;
    }

    int ans[n/3][8]; fill(&ans[0][0], &ans[0][0]+(n/3*8), 0);
    int size[n/3]; fill(size, size+n/3, 0);
    // Step 1, 2
    for(int i = 0; i < n/3; ++i) {
        if(counter[3]==0 && counter[4]==0) break;
        if(counter[3]) {
            ans[i][3] = 1;
            size[i]++;
            counter[3]--;
        } else if(counter[4]) {
            ans[i][4] = 1;
            size[i]++;
            counter[4]--;
        }
    }
    // Step 3, 4
    for(int i = 0; i < n/3; ++i) {
        if(counter[2] && ans[i][4]) {
            ans[i][2] = 1;
            size[i]++;
            counter[2]--;
        } else if(counter[6] && ans[i][3]) {
            ans[i][6] = 1;
            size[i]++;
            counter[6]--;
        }
    }
    // Step 5
    for(int i = 0; i < n/3; ++i) {
        if(size[i]==0) {
            if(counter[2] && counter[6]) {
                ans[i][2] = 1;
                ans[i][6] = 1;
                size[i] += 2;
                counter[2]--;
                counter[6]--;
            }
        }
    }
    // Step 6
    for(int i = 0; i < n/3; ++i) {
        ans[i][1] = 1;
        size[i]++;
        counter[1]--;
    }
    // Step 7
    for(int i = 1; i <= 7; ++i) {
        if(counter[i]!=0) {
            cout << -1;
            return 0;
        }
    }

    for(int i = 0; i < n/3; ++i) {
        for(int j = 1; j <= 7; ++j) {
            if(ans[i][j]==1) cout << j << " ";
        }
        cout << "\n";
    }
}