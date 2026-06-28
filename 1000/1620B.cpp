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
        int w, h;
        cin >> w >> h;

        ll ans = -1e9;

        // for x -> (x,0)
        int nx;
        cin >> nx;
        int mini = 1e9;
        int maxi = -1e9;
        while (nx--) {
            int x;
            cin >> x;
            mini = min(mini, x);
            maxi = max(maxi, x);
        }
        ans = max(ans, 1LL * (maxi - mini) * h);

        // for x -> (x,h)
        cin >> nx;
        mini = 1e9;
        maxi = -1e9;
        while (nx--) {
            int x;
            cin >> x;
            mini = min(mini, x);
            maxi = max(maxi, x);
        }
        ans = max(ans, 1LL * (maxi - mini) * h);

        // for y -> (0,y)
        int ny;
        cin >> ny;
        mini = 1e9;
        maxi = -1e9;
        while (ny--) {
            int y;
            cin >> y;
            mini = min(mini, y);
            maxi = max(maxi, y);
        }
        ans = max(ans, 1LL * (maxi - mini) * w);

        // for y -> (w,y)
        cin >> ny;
        mini = 1e9;
        maxi = -1e9;
        while (ny--) {
            int y;
            cin >> y;
            mini = min(mini, y);
            maxi = max(maxi, y);
        }
        ans = max(ans, 1LL * (maxi - mini) * w);

        cout << ans << "\n";
    }
}