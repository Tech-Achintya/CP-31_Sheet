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
        ll n,k,b,s;
        cin >> n>>k>>b>>s;
        ll minSumAllowed = k*b;
        ll maxSumAllowed = k*b + n*(k-1);
        if(s<minSumAllowed || s>maxSumAllowed){
            cout<<-1<<"\n";
        }
        else{
            vector<ll> ans(n,0);
            ans[0] = minSumAllowed;
            s-=minSumAllowed;
            for(int i=0;i<n;i++){
                ll add = min(k-1,s);
                ans[i] += add;
                s-=add;
                if(s==0){
                    i++;
                    while(i<n){
                        ans[i] = 0;
                        i++;
                    }
                    break;
                }
            }
            for(ll i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
        
    }
}
