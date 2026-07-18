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
        int n;
        cin >> n;
        vector<int> arr(n);
        bool isZero = false;
        int mini = 1e9;
        ll sum = 0;
        bool allPos = true;
        int cntOfNeg = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i]==0){
                isZero = true;
            }
            if(arr[i]<0){
                allPos = false;
                cntOfNeg++;
            }
            mini = min(mini,abs(arr[i]));
            sum+=abs(arr[i]);
        }
        if(allPos){
            cout<<sum<<"\n";
        }
        else if(cntOfNeg%2==0 || isZero){
            cout<<sum<<"\n";
        }else{
            cout<<sum-2*mini<<"\n";
        }
        
    }
}