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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans = (1 << 30) - 1;
        for(int i = 0; i < n; i++){
            if(arr[i] != i){
                ans &= arr[i];
                ans &= i;
            }
        }
        cout << ans << "\n";
    }
}


// 0 1 3 2 7 6 5 4

// 11
// 1

// 010
// 100