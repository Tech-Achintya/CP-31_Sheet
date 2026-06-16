#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            ans[i] = n-arr[i]+1;
        }
        
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}

// 1 2 4 5 3
// 5 4 2 1 3