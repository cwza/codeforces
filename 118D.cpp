#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Search + Memorization
*/

int n1, n2, k1, k2;
const int maxN = 100, maxK = 10, M = 1e8;
int memo[maxN+1][maxN+1][3][maxK+1];

void dfs(int cnt1, int cnt2, int last, int cntLast) {
    if(cnt1==n1 && cnt2==n2) {
        memo[cnt1][cnt2][last][cntLast] = 1;
        return;
    }
    if(memo[cnt1][cnt2][last][cntLast]!=-1) return;
    memo[cnt1][cnt2][last][cntLast] = 0;
    if(cnt1 < n1) { // Put 1 to last
        if(last==0 || last==2) {
            dfs(cnt1+1, cnt2, 1, 1);
            memo[cnt1][cnt2][last][cntLast] = (memo[cnt1][cnt2][last][cntLast] + memo[cnt1+1][cnt2][1][1]) % M;
        } else if(cntLast < k1){
            dfs(cnt1+1, cnt2, 1, cntLast+1);
            memo[cnt1][cnt2][last][cntLast] = (memo[cnt1][cnt2][last][cntLast] + memo[cnt1+1][cnt2][1][cntLast+1]) % M;
        }
    }
    if(cnt2 < n2) { // Put 2 to last
        if(last==0 || last==1) {
            dfs(cnt1, cnt2+1, 2, 1);
            memo[cnt1][cnt2][last][cntLast] = (memo[cnt1][cnt2][last][cntLast] + memo[cnt1][cnt2+1][2][1]) % M;
        } else if(cntLast < k2) {
            dfs(cnt1, cnt2+1, 2, cntLast+1);
            memo[cnt1][cnt2][last][cntLast] = (memo[cnt1][cnt2][last][cntLast] + memo[cnt1][cnt2+1][2][cntLast+1]) % M;
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n1 >> n2 >> k1 >> k2;
    
    fill(&memo[0][0][0][0], &memo[0][0][0][0]+(maxN+1)*(maxN+1)*3*(maxK+1), -1);
    dfs(0, 0, 0, 0);
    cout << memo[0][0][0][0];
}