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
        ll n,p;
        cin >> n>>p;
        vector<pair<ll,ll>> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i].second;
        }
        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].first = min(arr[i].first,p);
        }
        sort(arr.begin(),arr.end());
        if(arr[0].first>=p){
            cout<<n*p<<"\n";
            continue;
        }

        int cntOfppl = 1;
        ll cost = p;

        for(ll i = 0;i<n;i++){
            if(cntOfppl+arr[i].second>=n){
                cost += (n-cntOfppl) * arr[i].first;
                break;
            }
            cntOfppl+=arr[i].second;
            cost+=arr[i].second * arr[i].first;
        }
        cout<<cost<<"\n";

    }
}