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
        ll n,x;
        cin >> n>>x;
        ll maxi = 0;
        ll sum = 0;
        for(int i=0;i<n;i++){
            ll n;
            cin>>n;
            maxi += (n+x-1)/x;
            sum+=n;
        }
        cout<<((sum+x-1)/x)<< " "<< maxi<<"\n";
    }
}