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
        int n;
        cin >> n;
        vector<int> arr(n);
        int mini = 1e9;
        int maxi = -1e9;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if(i!=n-1){
                mini = min(arr[i],mini);
            }
            if(i!=0){
                maxi = max(arr[i],maxi);
            }
        }
        int minDiff = -1e9;
        for(int i=0;i<n-1;i++){
            minDiff = max(minDiff,arr[i]-arr[i+1]);
        }
        int ans = max({arr[n-1]-arr[0],arr[n-1]-mini,maxi-arr[0],minDiff});
        cout<<ans<<"\n";
    }
}