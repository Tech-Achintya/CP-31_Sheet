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
        ll n,m,i,j;
        cin >> n >> m>> i >> j;
        //corner points 
        if((i==1 && j==1) || (i==n && j==m)){
            cout<<n<<" "<<1<<" "<< 1 <<" "<<m<<"\n";
        }else{
            cout<<1<<" "<<1<<" "<< n<<" "<<m<<"\n";
        }
    }
}