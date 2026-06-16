#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(k==1){
            cout<<"NO"<<"\n";
        }
        else if(k>=n && x!=n){
            cout<<"YES"<<"\n";
            cout<<1<<"\n";
            cout<<n<<"\n";
        }
        else if(x!=1){
            cout<<"YES"<<"\n";
            cout<<n<<"\n";
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<"\n";
        }else{
            if(k>=3){
                if(n%2!=0){
                    cout<<"YES"<<"\n";
                    cout<<n/2<<"\n";
                    cout<<3<<" ";
                    for(int i=0;i<(n/2-1);i++){
                        cout<<2<<" ";
                    }
                }else{
                    cout<<"YES"<<"\n";
                    cout<<n/2<<"\n";
                    for(int i=0;i<n/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<"\n";
                }
            }else{
                if(n%2==0){
                    cout<<"YES"<<"\n";
                    cout<<n/2<<"\n";
                    for(int i=0;i<n/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<"\n";
                }else{
                    cout<<"NO"<<"\n";
                }
            }
        }
    } 
}