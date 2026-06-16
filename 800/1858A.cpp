#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int alice = b+(c/2);
        int bob = a + (c-(c/2));
        if(bob>alice){
            cout<<"First";
        }else{
            cout<<"Second";
        }
        cout<<"\n";
    }    
}