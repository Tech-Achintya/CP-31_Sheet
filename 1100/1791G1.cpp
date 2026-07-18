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
        ll n,c;
        cin >> n >> c;
        vector<ll> arr(n);
        vector<ll> totalCostForTelepoters(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            totalCostForTelepoters[i]=arr[i]+i+1;
        }
        sort(totalCostForTelepoters.begin(),totalCostForTelepoters.end());
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(c-totalCostForTelepoters[i]>=0){
                c-=totalCostForTelepoters[i];
                cnt++;
            }else{
                break;
            }
        }
        cout<<cnt<<"\n";
        
    }
}