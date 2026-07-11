#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void print(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
ll funct(ll mid, vector<ll>& arr, ll x){
    ll ans = 0;
    for(int i = 0; i < arr.size(); i++){
        ll side = arr[i] + 2 * mid;
        ans += (ll)side * side;
        if(ans > x) return ans;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n , x;
        cin >> n >> x;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll l = 0;
        ll r = 1000000000LL;
        ll ans = -1;
        while(l<=r){
            ll mid = l+(r-l)/2;
            ll value = funct(mid,arr,x);
            if(value <= x){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        cout<<ans<<"\n";
    }
}