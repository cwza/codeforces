#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
#define pi acos(-1)

/*
题目大意：给你一些点的坐标，问你把这些点包围的最小角度为多少。
解题思路：逆思维，观察可知黄色区域内有点，白色部分没有点，那么360-白色部分的角度就得到了黄色部分的角度，且每个黄色区域的两边上的两点肯定是相邻的；要使黄色夹角最小，那么白色的夹角得最大，求出最大的相邻点的角度，用360-这个角度即可。atan2在tan（a/b），b=0的情况下也能使用。
atan2(y,x)這個函數，該函數可以求出原點到點(x,y)組成的向量，與x軸正方向形成的夾角(弧度)
*/

int n;
vector<double> angles;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    angles.resize(n);
    for(int i = 0, x, y; i < n; ++i) {
        cin >> x >> y;
        angles[i] = atan2(y, x);
    }
    sort(angles.begin(), angles.end());
    
    angles.push_back(2*pi+angles[0]);
    double maxDiff = 0;
    for(int i = 0; i < angles.size()-1; ++i) {
        maxDiff = max(maxDiff, angles[i+1]-angles[i]);
    }
    cout.precision(10);
    cout << (2*pi-maxDiff)*180/pi;
}