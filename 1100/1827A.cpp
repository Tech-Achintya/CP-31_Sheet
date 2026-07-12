#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const ll MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<ll> elementGreater(n);

        for (int i = 0; i < n; i++) {
            int idx = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            elementGreater[i] = n - idx;
        }

        ll ans = 1;
        int used = 0;

        for (int i = n - 1; i >= 0; i--) {
            ll choices = elementGreater[i] - used;
            if (choices <= 0) {
                ans = 0;
                break;
            }
            ans = (ans * choices) % MOD;
            used++;
        }

        cout << ans << endl;
    }
}