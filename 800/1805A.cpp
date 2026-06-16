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
        int allXor = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            
            allXor^=arr[i];
        }
        if(n%2!=0){
            cout<<allXor<<"\n";
        }else{
            if(allXor!=0){
                cout<<-1<<"\n";
            }else{
                cout<<3<<"\n";
            }
        }
    }
}