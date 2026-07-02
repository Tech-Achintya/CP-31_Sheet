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
        ll x,y,k;
        cin>>x>>y>>k;
        ll totalSticks = k * (y + 1 ) - 1;   // k + (y * k) - 1
        ll d = x - 1;

        ll needTrades = (totalSticks+d-1)/d;

        cout << needTrades + k << "\n";
        
    }
}