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
        int countOfMinusOne = 0;
        int countOfOne = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==-1){
                countOfMinusOne++;
            }
        }
        int ans = 0;
        countOfOne = n-countOfMinusOne;
        while(countOfMinusOne > countOfOne || countOfMinusOne % 2 != 0) {
            countOfMinusOne--;
            countOfOne++;
            ans++;
        }
        cout<<ans<<"\n";
    }
}
