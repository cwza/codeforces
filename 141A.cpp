#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s1, s2, s3;
int counter1[26];
int counter2[26];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin >> s1 >> s2 >> s3;
    for(int i = 0; i < s1.size(); ++i) {
        counter1[s1[i]-'A']++;
    } 
    for(int i = 0; i < s2.size(); ++i) {
        counter1[s2[i]-'A']++;
    } 
    for(int i = 0; i < s3.size(); ++i) {
        counter2[s3[i]-'A']++;
    } 

    for(int i = 0; i < 26; ++i) {
        if(counter1[i] != counter2[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}