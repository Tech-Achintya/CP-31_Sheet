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
        int largest = -1e9;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            largest = max(largest,arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]==largest){
                cnt++;
            }
        }
        if(arr[0]==arr[n-1]){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
            cout<<largest<<" ";
            cnt--;
            for(int i=0;i<n;i++){
                if(arr[i]!=largest){
                    cout<<arr[i]<<" ";
                }
            }
            while(cnt--){
                cout<<largest<<" ";
            }
            cout<<"\n";
        }
    }
}