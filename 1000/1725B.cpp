#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while (t--) {
        int n,d;
        cin >> n >> d;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        int i = -1; int j = n-1;
        int ans = 0;
        while(i < j){
        int cnt = 1;
        int right = arr[j];

        while(i + 1 < j && 1LL * cnt * right <= d){
            cnt++;
            i++;
        }

        if(1LL * cnt * right <= d){
            break;
        }

        ans++;
        j--;
    }
        cout<<ans<<"\n";
    }
}