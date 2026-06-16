#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int l = -1;
        int r = -1;
        int ans = 1;
        for(int i=1;i<=min(50LL,n);i++){
            if(n%i==0){
                if(l==-1){
                    l = i;
                }else{
                    ans = max(ans,i-l+1);
                }
            }else{
                l=-1;
            }
        }
        cout<<ans<<"\n";
    }
}