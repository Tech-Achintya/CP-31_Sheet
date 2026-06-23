#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        unordered_map<int, int> map_A, map_B;

        for (int i = 0; i < n;) {
            int j = i;
            while (j < n && a[j] == a[i]) j++;

            map_A[a[i]] = max(map_A[a[i]], j - i);
            i = j;
        }

        for (int i = 0; i < n;) {
            int j = i;
            while (j < n && b[j] == b[i]) j++;

            map_B[b[i]] = max(map_B[b[i]], j - i);
            i = j;
        }

        int ans = 0;

        for (int val = 1; val <= 2 * n; val++) {
            ans = max(ans, map_A[val] + map_B[val]);
        }

        cout << ans << "\n";
    }
    return 0;
}