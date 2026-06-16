#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s = to_string(n);
        int ans = (s.length() - 1) * 9 + (s[0] - '0');

        cout << ans << "\n";
    }
}