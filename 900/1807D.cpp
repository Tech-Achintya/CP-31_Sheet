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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,q;
        cin >> n>>q;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<ll> prefixSum(n);
        prefixSum[0] = arr[0];
        for(int i=1;i<n;i++){
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            ll prevTotalSum = prefixSum[n-1];
            ll currRangeSum = prefixSum[r-1] - (l > 1 ? prefixSum[l-2] : 0);
            ll newTotalSum = prevTotalSum - currRangeSum + 1LL* k*(r-l+1);
            if(newTotalSum%2==0){
                cout<<"NO";
            }else{
                cout<<"YES";
            }
            cout<<"\n";
        }        
    }
}