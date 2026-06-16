#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        int minDiff = 1e9;
        bool flag  = false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
            if(i>0){
                if(arr[i-1]>arr[i]){
                    flag = true;
                }
                if(arr[i-1]<=arr[i]){
                    minDiff = min(minDiff, arr[i]-arr[i-1]);
                }
            }
        }
        if(minDiff==1e9){
            cout<<0<<"\n";
        }else if(flag){
            cout<<0<<"\n";
        }
        else{
            cout << (minDiff + 2) / 2 << "\n";
        }
    }  
}