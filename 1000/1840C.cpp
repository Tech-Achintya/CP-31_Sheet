#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k,q;
        cin>>n>>k>>q;
        vector<bool> arr(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=q) arr[i] = true;
        }
        vector<ll> conseq_days;
        int i = 0;
        while(i<n){
            ll days = 0;
            while(arr[i] && i<n){
                days++;
                i++;
            }
            if(days>0) conseq_days.push_back(days);
            i++;
        }
        ll ans = 0;
        for(ll temp : conseq_days){
            if(temp >= k){
                ll x = temp - k + 1;
                ans += x * (x + 1) / 2;
            }
        }
        cout<<ans<<"\n";
    }
}