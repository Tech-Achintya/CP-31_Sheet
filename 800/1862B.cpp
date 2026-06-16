#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        vector<int> ans;
        ans.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i]){
                ans.push_back(1);
                ans.push_back(arr[i]);
            }else{
                ans.push_back(arr[i]);
            }
        }
        cout<<ans.size()<<"\n";
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }   
}