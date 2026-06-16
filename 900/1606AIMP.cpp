#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        if(s[0]!=s[n-1]){
            s[0] = s[n-1];
            cout<<s<<"\n";
        }else{
            cout<<s<<"\n";
        }
    }
}