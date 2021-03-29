#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Greedy
If k == 2, just check "BABABA" and "ABABAB" which one is better

For K>2 , decompose the string into contiguous single-colored sequences. Observe one such sequence. If it has an odd number of characters, say 2m+1, replace m characters with some other character in the following fashion:
AAAAA
becomes
ABABA
It can be observed that by changing less than m characters doesn't remove all pairs of adjacent identical characters. Similarly, for sequences of even length, say 2m characters, observe a character in the original string right after the last character of the observed sequence, and choose a character different from both. Example:
AAAAAAB
becomes
ACACACB
Again, it is sufficient and necessary to change m characters.
*/

int n, k;
string s;
vector<array<int, 2>> evens, odds;
int ans;

char findFree(char ch1, char ch2 = '~') {
    for(int i = 0; i < k; ++i) {
        if(i==(ch1-'A') || i==(ch2-'A')) continue;
        return i+'A';
    }
    return '~';
}

void handleOdds() {
    for(int i = 0; i < odds.size(); ++i) {
        char free = findFree(s[odds[i][0]]);
        auto [oddI, oddJ] = odds[i];
        for(int j = oddI; j <= oddJ; ++j) {
            if((j-oddI)%2==1) {
                s[j] = free;
                ans++;
            }
        }
    }
}

void handleEvens() {
    for(int i = 0; i < evens.size(); ++i) {
        char free = '~';
        auto [evenI, evenJ] = evens[i];
        if(evenJ==n-1)  free = findFree(s[evenJ]);
        else free = findFree(s[evenI], s[evenJ+1]);
        for(int j = evenI; j <= evenJ; ++j) {
            if((j-evenI)%2==1) {
                s[j] = free;
                ans++;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> k;
    cin >> s;
    if(k==2) {
        string s1 = "", s2 = "";
        for(int i = 0; i < n; ++i) {
            if(i%2==0) {
                s1.push_back('A');
                s2.push_back('B');
            } else {
                s1.push_back('B');
                s2.push_back('A');
            }
        }
        int ans1 = 0, ans2 = 0;
        for(int i = 0; i < n; ++i) {
            if(s[i]!=s1[i]) ans1++;
            if(s[i]!=s2[i]) ans2++;
        }
        if(ans1 <= ans2) {
            cout << ans1 << "\n";
            cout << s1;
        } else {
            cout << ans2 << "\n";
            cout << s2;
        }
        return 0;
    }

    int i = 0, j = 0;
    while(i<n && j<n) {
        while(j<n && s[i]==s[j]) j++;
        if((j-i)==1) {}
        else if((j-i)%2==0) evens.push_back({i, j-1});
        else odds.push_back({i, j-1});
        i = j;
    }
    handleOdds();
    handleEvens();
    cout << ans << "\n";
    cout << s;
}