#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int ans = -1;
        for(int ops = 0; ops <= 6; ops++) {
            if(x.find(s) != string::npos) {
                ans = ops;
                break;
            }
            x += x;
        }
        cout << ans << "\n";
    }
}