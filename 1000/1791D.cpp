// babacaba
// 12223333
// 33333221
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
        string s;
        cin>>s;
        unordered_set<char> st;
        vector<ll> arr1(n);
        for(int i=0;i<n;i++){
            char curr = s[i];
            st.insert(curr);
            arr1[i] = st.size();
        }
        st.clear();
        vector<ll> arr2(n);
        for(int i=n-1;i>=0;i--){
            char curr = s[i];
            arr2[i] = st.size();
            st.insert(curr);
        }    
        ll ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,arr1[i]+arr2[i]);
        }
        cout<<ans<<"\n";
        
    }
}
// paiumoment
// 1234566789
// 9876554321