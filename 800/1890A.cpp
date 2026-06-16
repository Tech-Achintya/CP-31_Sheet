#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){ 
        int n;
        cin>>n;
        vector<int> arr(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        if(mp.size()==1){
            cout<<"YES"<<"\n";
        }
        else if(mp.size()==2){
            int cnt1 = 0;
            int cnt2 = 0;
            bool flag = true;
            for(auto it:mp){
                if(flag){
                    cnt1 = it.second;
                    flag=false;
                }else{
                    cnt2 = it.second;
                }
            }
            if(n%2==0){
                if(cnt1==cnt2){
                    cout<<"YES"<<"\n";
                }else{
                    cout<<"NO"<<"\n";
                }
            }else{
                if(abs(cnt1-cnt2)==1){
                    cout<<"YES"<<"\n";
                }else{
                    cout<<"NO"<<"\n";
                }
            }
        }else{
            cout<<"NO"<<"\n";
        }
    }
        return 0;
}