#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin>>s;
        string temp = s;
        sort(s.begin(),s.end());
        if(temp==s){
            cout<<"NO"<<"\n";
            continue;
        }
        int diffIndx = 0;
        int i = 0;
        while(i<n && s[i]==temp[i]){
            i++;
        }
        diffIndx = i;
        char toFind = s[i];
        int ansInd = i;
        for(int j = i;j<n;j++){
            if(temp[j]==toFind){
                ansInd = j;
                break;
            }
        }
        cout<<"YES"<<"\n";
        cout<<i+1<<" "<<ansInd+1<<"\n";

    }
}