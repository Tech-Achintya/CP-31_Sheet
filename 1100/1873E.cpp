#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


ll check(ll h,vector<ll> &arr){
    ll unitsOfWater = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>=h){
            continue;
        }
        unitsOfWater+=h-arr[i];
    }
    return unitsOfWater;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll mx = *max_element(arr.begin(), arr.end());
        ll l = 0; ll r = mx+x;
        ll ans = 1;
        while(l<=r){
            ll mid = l + (r-l)/2;
            if(check(mid,arr)<=x){
                l =mid+1;
                ans = mid;
            }else{
                r = mid-1;
            }
        }
        cout<<ans<<"\n";
    }
}