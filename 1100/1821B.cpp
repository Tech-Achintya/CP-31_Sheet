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
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int l = 0;
        for(int i=0;i<n;i++){
            l = i;
            if(a[i]!=b[i]){
                break;
            }
        }
        int r = n-1;
        for(int i=n-1;i>=0;i--){
            r = i;
            if(a[i]!=b[i]){
                break;
            }
        }
        ll mini = 1e9;
        ll maxi = -1e9;
        for(int i=l;i<=r;i++){
            mini = min(b[i],mini);
            maxi = max(b[i],maxi);
        }
        int ansl = l;
        int ansr = r;
        for(int i=l-1;i>=0;i--){
            if(b[i]<=mini){
                ansl = i;
                mini = min(b[i],mini);
            }else{
                break;
            }
        }
        for(int i=r+1;i<n;i++){
            if(b[i]>=maxi){
                ansr = i;
                maxi = max(maxi,b[i]);
            }else{
                break;
            }
        }
        cout<<ansl+1<<" "<<ansr+1;
        cout<<"\n";
    }
}