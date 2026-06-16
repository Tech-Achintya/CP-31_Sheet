#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int zero = 0, one = 0;

        for (char c : s) {
            if (c == '0') zero++;
            else one++;
        }

        if (min(zero, one) & 1)
            cout << "DA\n";
        else
            cout << "NET\n";
    }

    return 0;
}