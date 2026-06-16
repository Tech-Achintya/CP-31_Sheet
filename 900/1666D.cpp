#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s, t;
        cin >> s >> t;
        unordered_map<char,int> m1, m2;
        for (char ch : s)
            m1[ch]++;
        for (char ch : t)
            m2[ch]++;
        int i = 0, j = 0;
        
        while (i < (int)s.size() && j < (int)t.size()) {
            if (s[i] == t[j]) {
                if (m1[s[i]] < m2[t[j]]) {
                    break;
                }
                if (m1[s[i]] == m2[t[j]]) {
                    m1[s[i]]--;
                    m2[t[j]]--;
                    i++;
                    j++;
                    continue;
                }
            }

            m1[s[i]]--;
            i++;
        }

        if (j == (int)t.size())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}