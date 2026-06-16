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
        int ans = -1;
        for(int i=0;i<n;i++){
            int res1 = 0;
            for(int j=i;j>=0;j--){
                if(arr[j]==2){
                    res1++;
                }
            }
            int res2 = 0;
            for(int j=i+1;j<n;j++){
                if(arr[j]==2){
                    res2++;
                }
            }
            if(res1==res2){
                ans = i+1;
                break;
            }
        }
        cout<<ans<<"\n";
    }
}