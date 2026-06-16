#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        int val = n%3;
        if(val==0){
            cout<<"Second"<<"\n";
        }else{
            cout<<"First"<<"\n";
        }
    }
    

}