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
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        if(arr[0]!=1){
            cout<<"No"<<"\n";
            continue;
        }
        ll sum = 1;
        bool flag = true;
        for(int i=1;i<n;i++){
            if(arr[i]>sum){
                flag = false;
                cout << "No" << endl;
                break;
            }
            sum+=arr[i];
        }
        if(flag){
            cout << "Yes" << endl;
        }
    }
}