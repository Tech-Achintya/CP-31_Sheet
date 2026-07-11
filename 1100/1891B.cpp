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
        int n,q;
        cin >> n >> q;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<ll> query(q);
        unordered_set<int> st;
        vector<int> UpowOfTwo;
        for (int i = 0; i < q; i++) {
            cin >> query[i];
            if(st.find(query[i])==st.end()){
                UpowOfTwo.push_back(query[i]);
            }
            st.insert(query[i]);
        }
        // for(int i=0;i<UpowOfTwo.size();i++){
        //     cout<<UpowOfTwo[i]<<" ";
        // }
        vector<ll> ans = arr;
        for(int i=0;i<n;i++){
            for(int j=0;j<UpowOfTwo.size();j++){
                if(ans[i]%(ll)pow(2,UpowOfTwo[j])==0){
                    ans[i]=ans[i]+pow(2,UpowOfTwo[j]-1);
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}