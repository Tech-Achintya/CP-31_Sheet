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
        vector<ll> prefixSum(n);
        prefixSum[0] = arr[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }
        ll ans = 0;
        for(int i=0;i<n/2;i++){
            if(n%(i+1)!=0) continue;
            ll mini = LLONG_MAX;
            ll maxi = LLONG_MIN;
            int j = 0;
            while(j+i<n){
                if(i==0){
                    mini = min(mini,arr[j]);
                    maxi = max(maxi,arr[j]);
                    j++;
                    continue;
                }
                if(j+i<n){
                    int jumpedIndex = j+i;
                    ll sumOfTheInterval;
                    if(j==0)
                        sumOfTheInterval = prefixSum[jumpedIndex];
                    else
                        sumOfTheInterval = prefixSum[jumpedIndex] - prefixSum[j-1];
                    mini = min(mini,sumOfTheInterval);
                    maxi = max(maxi,sumOfTheInterval);
                    j = jumpedIndex+1;
                }
            }
            ans = max(ans,maxi-mini);
        }
        cout<<ans<<"\n";
    }
}