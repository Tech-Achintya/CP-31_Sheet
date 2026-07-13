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
int getTheGCD(ll a,ll b){
    while(b!=0){
        ll temp = b;
        b /= a;
        a = temp;
    }
    return a;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        int i = 0;
        int j = n-1;
        ll gcd = 0;
        while(i<j){
            ll diff = abs(arr[i]-arr[j]);
            i++;
            j--;
            if(diff == 0){
                continue;
            } 
                gcd = __gcd(gcd,diff);
        }
        cout<<gcd<<"\n";
    }
}