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
        vector<ll> dp(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool last_odd = true;
        if(abs(arr[0])%2==0){
            last_odd = false;
        }
        dp[0] = arr[0];
        ll maxi = dp[0];
        for(int i=1;i<n;i++){
            if(abs(arr[i])%2==0){
                if(last_odd){
                    dp[i] = max(arr[i],dp[i-1] + arr[i]);
                }else{
                    dp[i] = arr[i];
                }
                last_odd = false;
            }else{
                if(!last_odd){
                    dp[i] = max(arr[i],dp[i-1] + arr[i]);
                }else{
                    dp[i] = arr[i];
                }
                last_odd = true;
            }
            maxi = max(maxi,dp[i]);
        }
        cout<<maxi<<"\n";
    }
}