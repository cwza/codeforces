#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 2、3、5、7、11、13、17、19、23、29、31、37、41、43、47、53
map<int, int> table = {{2, 3}, {3, 5}, {5, 7}, {7, 11}, {11, 13}, {13, 17}, {17, 19}, {19, 23}, {23, 29}, {29, 31}, {31, 37}, {37, 41}, {41, 43}, {43, 47}, {47, 53}};

int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    if(m == table[n]) cout << "YES";
    else cout << "NO";
}