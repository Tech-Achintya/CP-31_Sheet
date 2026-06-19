#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);

        ll mini = 1e9;
        bool flag = false;

        int evenCnt = 0;
        int twos = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] % k == 0) flag = true;

            mini = min(mini, (k - a[i] % k) % k);

            if (k == 4) {
                if (a[i] % 2 == 0) evenCnt++;

                int temp = a[i];
                while (temp % 2 == 0) {
                    twos++;
                    temp /= 2;
                }
            }
        }

        if (k != 4) {
            if (flag) cout << 0 << "\n";
            else cout << mini << "\n";
        }
        else {
            ll ans = mini;

            if (twos >= 2) ans = 0;
            else {
                if (evenCnt == 1) ans = min(ans, 1LL);
                else if (evenCnt == 0) ans = min(ans, 2LL);
            }
            cout << ans << "\n";
        }
    }
}