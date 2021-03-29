#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s;
    vector<int> nums;
    for(char ch : s) {
        if(ch != '+') {
            nums.push_back(ch-'0');
        }
    }
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); ++i) {
        cout << nums[i];
        if(i != nums.size()-1) cout << "+";
    }
}