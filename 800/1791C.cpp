#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int gcd = arr[0];
        bool flag = true;
        for(int i=1;i<n;i++){
            gcd = __gcd(gcd,arr[i]);
        }
        if(gcd>n){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
        cout<<"\n";
    }
}