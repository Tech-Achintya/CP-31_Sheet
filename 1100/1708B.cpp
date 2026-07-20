#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

// ll funct(int num,ll l,ll r){
//     ll temp = num;
//     while(temp<l){
//         temp+=num;
//     }
//     if(temp>r){
//         return -1;
//     }
//     return temp;
// }
ll funct(ll num, ll l, ll r){
    ll temp = ((l + num - 1) / num) * num;
    if(temp > r) return -1;
    return temp;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> arr(n);
        bool flag = true;
        // if(r-l+1<n){
        //     cout<<"No"<<"\n";
        //     continue;
        // }
        for(int i=1;i<=n;i++){
            ll num = funct(i,l,r);
            if(num==-1){
                flag = false;
                break;
            }
            arr[i-1] = num;
        }
        if(!flag){
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<"\n";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}