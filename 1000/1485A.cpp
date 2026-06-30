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
        ll a,b;
        cin >> a >> b;

        ll minOper = 1e9;
        for(int i = max((long long)2,b);i<=b+11;i++){
            ll currOper = i-b;
            ll temp = a;
            while(temp>0){
                temp/=i;
                currOper++;
            }
            minOper = min(minOper,currOper);
        }
        cout << minOper << "\n";
    }
}