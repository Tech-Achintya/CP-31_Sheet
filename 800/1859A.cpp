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
        vector<int> b;
        vector<int> c;
        int maxi = -1;
        bool allSame = false;
        int prev = -1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(prev!=-1){
                if(x!=prev){
                    allSame=true;
                }
            }
            prev = x;
            maxi = max(x,maxi);
            b.push_back(x);
        }
        if(!allSame){
            cout<<-1<<"\n";
        }else{
            c.push_back(maxi);
            int x = count(b.begin(),b.end(),maxi);
            for(int i=0;i<x-1;i++){
                c.push_back(maxi);
            }
            b.erase(remove(b.begin(), b.end(), maxi), b.end());
            cout<<b.size()<<" "<<c.size()<<"\n";
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<"\n";
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
            cout<<"\n";
        }
    }

}