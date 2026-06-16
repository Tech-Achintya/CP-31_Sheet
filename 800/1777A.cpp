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
        int conEven = 0;
        int conOdd = 0;
        int minOper = 0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                conEven++;
                if(conOdd>1){
                    minOper += conOdd-1;
                }
                conOdd = 0;
            }else{
                conOdd++;
                if(conEven>1){
                    minOper+=conEven-1;
                }
                conEven = 0;
            }        
        }
        if(conEven>1){
            minOper+=conEven-1;
        }
        if(conOdd>1){
            minOper+=conOdd-1;
        }
        cout<<minOper<<"\n";
    }
}