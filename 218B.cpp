#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> n >> m;
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(int i = 0, a; i < m; ++i) {
        cin >> a;
        maxHeap.push(a);
        minHeap.push(a);
    }

    int a = n;
    int ans1 = 0;
    while(a--) {
        int maxNum = maxHeap.top();
        ans1 += maxNum;
        maxHeap.pop();
        if(maxNum-1 > 0) maxHeap.push(maxNum-1);
    }
    a = n;
    int ans2 = 0;
    while(a--) {
        int minNum = minHeap.top();
        ans2 += minNum;
        minHeap.pop();
        if(minNum-1 > 0) minHeap.push(minNum-1);
    }
    cout << ans1 << " " << ans2;
}