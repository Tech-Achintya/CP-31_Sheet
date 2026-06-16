#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> temp = arr;
        sort(arr.begin(),arr.end());
        if(m<=1 && temp!=arr){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
}