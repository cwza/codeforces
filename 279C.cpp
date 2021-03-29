#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
1. have 2 dp arrays say rt[100005] and lt[100005];
2. rt[i] stores the highest index to the right of i such that arr[i....rt[i]] is non decreasing
3. and lt[i] stores the smallest index such that arr[lt[i].....i] is non-increasing.
4. you can do each of these in O(n)
5. now for a given query a,b , if rt[a] >= lt[b] ... i,e. arr[a..........rt[a]] — >non-decreasing ..........arr[lt[b].......b] ->non-increasing means there is a ladder.
*/

int n, m;
vector<int> inp;
vector<int> lt, rt;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m;
    inp.resize(n+1); lt.resize(n+1); rt.resize(n+1);
    for(int i = 1; i <= n; ++i) cin >> inp[i];

    for(int i = 1; i <= n; ++i) {
        if(i!=1 && i<=rt[i-1]) rt[i] = rt[i-1];
        else {
            int j = i + 1;
            while(j<=n && inp[j]>=inp[j-1]) j++;
            rt[i] = j-1;
        }
    }
    for(int i = n; i >= 1; --i) {
        if(i!=n && i>=lt[i+1]) lt[i] = lt[i+1];
        else {
            int j = i - 1;
            while(j>=1 && inp[j]>=inp[j+1]) j--;
            lt[i] = j+1;
        }
    }

    while(m--) {
        int a, b;
        cin >> a >> b;
        if(rt[a] >= lt[b]) cout << "Yes\n";
        else cout << "No\n";
    }
}