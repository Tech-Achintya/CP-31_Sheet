#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll mod = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = ((((n * (n + 1)) % mod) * (4 * n - 1)) % mod * 337) % mod;
        cout<<ans<<"\n";
    }
}