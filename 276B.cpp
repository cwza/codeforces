#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
The key thing to notice in this task is, if we can arrange the characters of the string we have into a palindrome, then there can be at most one character with an odd amount of occurences. 
This easily gives us the answer: if there are <= 1 characters with an odd amount of occurences in the initial string, then the winner is the first player. 
Otherwise, the answer is dependant on whether the amount of characters with odd amounts of occurences is even or odd; if it's even then the second player wins, otherwise the first player wins (since the one who is forced to get this amount to one first is going to lose).
*/

string s;
int counter[26];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; ++i) counter[s[i]-'a']++;

    int numOdd = 0;
    for(int i = 0; i < 26; ++i) {
        if(counter[i]%2==1) numOdd++;
    }

    if(numOdd==0 || numOdd%2==1) cout << "First";
    else cout << "Second";
}