#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> map;
        for(int i=0;i<n;i++){
            map[s[i]]++;
        }
        int cntOfOddFreq = 0;
        for(auto &it : map){
            if(it.second&2!=0){
                cntOfOddFreq++;
            }
        }
        if(k<cntOfOddFreq-1){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
        cout<<"\n";
    }
}
