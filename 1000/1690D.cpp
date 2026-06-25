#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n>>k;
        string s;
        cin>>s;
        vector<int> prefix(n);
        if(s[0]=='W'){
            prefix[0] = -1;
        }else{
            prefix[0] = 1;
        }
        for(int i=1;i<n;i++){
            int var = s[i]=='W'?-1:1;
            prefix[i] = prefix[i-1] + var;  
        }
        int mini = 1e9;

        for(int i = 0; i <= n-k; i++){
            int value;

            if(i == 0){
                value = prefix[i+k-1];
            }else{
                value = prefix[i+k-1] - prefix[i-1];
            }

            int diff = (k - value) / 2;
            mini = min(mini, diff);
        }
        cout << mini << "/\n";
    }
}