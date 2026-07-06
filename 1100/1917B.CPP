#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<char> st;
        long long ans = 0;

        for (char c : s) {
            st.insert(c);
            ans += st.size();
        }

        cout << ans << "\n";
    }

    return 0;
}