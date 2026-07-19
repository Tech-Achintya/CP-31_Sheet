#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll funct(int num,int l,int r){
    
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
        if(r-l+1<n){
            cout<<"No";
            continue;
        }
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