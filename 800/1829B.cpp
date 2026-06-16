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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        int max_ans = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                if(i>0 && arr[i-1]==0){
                    ans++;
                    max_ans = max(max_ans,ans);
                    continue;
                }
                ans = 1;
                max_ans = max(max_ans,ans);
            }
        }
        cout<<max_ans<<"\n";
    }
}