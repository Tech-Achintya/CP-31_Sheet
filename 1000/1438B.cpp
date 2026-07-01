#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void print(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            st.insert(x);
        }
        if(st.size()==n){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
        cout<<"\n";        
    }
}