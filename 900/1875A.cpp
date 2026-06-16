#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a,b,n;
        cin >>a>>b>>n;
        vector<int> arr(n);
        int ans = b-1; // 0
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            ans += min(arr[i],a-1); // 1 + 2 +
        }
        cout << ans + 1<< "\n";
    }
}