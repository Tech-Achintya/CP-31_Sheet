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
        ll a,b;
        cin >> a >> b;
        if(a==b){
            cout<<0<<" "<<0<<"\n";
            continue;
        }
        ll ans1 = abs(a-b);
        ll temp = min(a,b)%ans1;
        ll ans2 = min(temp,ans1-temp);
        cout<<ans1<<" "<<ans2<<"\n";
    }
}