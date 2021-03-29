#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
    题意：给你一个n*n的格子，每一个格子都有一个数值！将两只bishops放在某一个格子上，
    每一个bishop可以攻击对角线上的格子（主对角线和者斜对角线），然后会获得格子上的
    数值（只能获取一次）。要求输出两个bishops获取的最大值以及它们所在的位置！
    
    
    思路：直接暴力！....不错的暴力题目！ 
    首先我们都知道每一条主对角线上的横纵坐标的和相同，每一条副对角线上的横纵坐标的差相同！
    那么我们在输入的时候就可以将所有对角线上的数值之和求出来了！ 
    
    最后我们发现如果要获得最大值，那么还有一条就是两个bishops所在的对角线不能相交在
    同一个格子上！只要满足两个bishops的哼纵坐标之和互为奇偶就可以了！ 
    
    在所有格子中找到横纵坐标之和为奇数并且获得对角线上数值最大的格子和横纵坐标之
    和为偶数并且获得对角线上数值最大的格子！ 
    二者最大获得值相加就是最终的答案了！ 
*/

int n;
vector<vector<int>> grid;
vector<ll> diag1, diag2;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    grid.resize(n, vector<int>(n));
    diag1.resize(n*2-1); diag2.resize(n*2-1);
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> grid[i][j];
            diag1[i+j] += grid[i][j];
            diag2[i-j+n-1] += grid[i][j];
        }
    }
    ll maxEven = -1, maxOdd = -1;
    int x1, y1, x2, y2;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            ll score = diag1[i+j] + diag2[i-j+n-1] - grid[i][j];
            if((i+j)%2==0) {
                if(score > maxEven) {
                    maxEven = score;
                    x1 = i, y1 = j;
                }
            } else {
                if(score > maxOdd) {
                    maxOdd = score;
                    x2 = i, y2 = j;
                }
            }
        }
    }
    cout << maxEven + maxOdd << "\n";
    cout << x1+1 << " " << y1+1 << " " << x2+1 << " " << y2+1;
}