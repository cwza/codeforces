#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
vector<ll> luckies;

void createLuckies() {
    vector<string> ori = {"47", "4477", "444777", "44447777"};
    for(string s : ori) {
        do {
            luckies.push_back(stol(s));
        } while(next_permutation(s.begin(), s.end()));
    }
    luckies.push_back((ll)4444477777);
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    createLuckies();
    cin >> n;
    for(ll lucky : luckies) {
        if(lucky >= n) {
            cout << lucky;
            return 0;
        }
    }
}