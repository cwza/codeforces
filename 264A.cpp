#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
我們考慮，當石頭下落到區間的中間時，松鼠如果向左移動，那麼石頭就在現在區間的右端點，接下來不管怎麼移動，剩下的石頭都會在這個石頭的左邊。松鼠如果向右移動，那麼石頭就這現在區間的左端點，因為松鼠只能在這個石頭的右面移動，所以剩下的石頭都在這個石頭的右邊，可以直接輸出。

然後想一下向左移動時的石頭咋辦，發現向左時掉落的石頭，掉的越早，位置越往後即輸出的時間越晚，拿棧儲存向左掉落的石頭。
*/

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> s;
    stack<int> st;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i]=='r') {
            cout << i+1 << "\n";
        } else {
            st.push(i+1);
        }
    }
    while(st.size()) {
        cout << st.top() << "\n";
        st.pop();
    }
}