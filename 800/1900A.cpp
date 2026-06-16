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
        vector<char> arr(n);
        vector<int> temp;
        int pt=0;
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            arr[i] = c;
            if(c=='#'){
                if(pt!=0){
                    temp.push_back(pt);
                }
                pt=0;
            }else{
                pt++;
            }
        }   
        if(pt!=0){
            temp.push_back(pt);
        }
        if(temp.empty()){
            cout<<0<<"\n";
        }else{
            int len = temp.size();
            int ans = 0;
            bool flag = false;
            for(int i=0;i<len;i++){
                if(temp[i]>=3){
                    flag = true;
                    break;
                }else{
                    ans+=temp[i];
                }
            }
            if(flag){
                cout<<2<<"\n";
            }else{
                cout<<ans<<"\n";
            }
        }
    }    
}