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
        vector<vector<ll>> all_arr(n);  

        for (int k = 0; k < n; k++) {
            int size;
            cin >> size;
            vector<ll> arr(size);
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            all_arr[k] = arr;   
        }

        ll minSecVal = 1e9;
        ll mini = 1e9;
        ll sumOfSecVal = 0;
        for (int i = 0; i < all_arr.size(); i++) {
            sort(all_arr[i].begin(),all_arr[i].end());
            mini = min(mini,all_arr[i][0]);
            if(all_arr[i].size()>=2){
                minSecVal = min(minSecVal,all_arr[i][1]);
                sumOfSecVal+=all_arr[i][1];
            }
        }
        cout<<sumOfSecVal-minSecVal+mini<<"\n";
    }
}
