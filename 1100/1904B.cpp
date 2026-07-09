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
        int n;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<pair<ll, ll>> sortedArr(n);
        for (int i = 0; i < n; i++) {
            sortedArr[i] = {arr[i], i};
        }

        sort(sortedArr.begin(), sortedArr.end());

        vector<ll> prefixSum(n);
        prefixSum[0] = sortedArr[0].first;
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + sortedArr[i].first;
        }

        vector<ll> ans(n, -1);

        ans[sortedArr[n - 1].second] = n - 1;

        for (int i = n - 2; i >= 0; i--) {
            if (prefixSum[i] >= sortedArr[i + 1].first) {
                ans[sortedArr[i].second] = ans[sortedArr[i + 1].second];
            } else {
                ans[sortedArr[i].second] = i;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}