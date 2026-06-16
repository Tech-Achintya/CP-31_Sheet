#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        arr.push_back(0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        arr.push_back(x);
        int ans = 0;
        int len = arr.size();
        for(int i=0;i<len-1;i++){
            if(i==len-2){
                ans = max(ans,2*(arr[i+1]-arr[i]));
            }else{
                ans = max(ans,arr[i+1]-arr[i]);
            }
        }
        cout<<ans<<"\n";
    }
}
