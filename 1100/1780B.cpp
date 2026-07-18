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
        vector<int> arr(n);
    
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<ll> prefix(n);
        prefix[0] = arr[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1] + arr[i];
        }
        vector<ll> suffix(n);
        suffix[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i] = suffix[i+1]+arr[i];
        }
        ll ans = 1;

        for(int i = 0; i < n - 1; i++){
            ans = max(ans, __gcd(prefix[i], suffix[i + 1]));
        }
        cout<<ans<<endl;
    }
}