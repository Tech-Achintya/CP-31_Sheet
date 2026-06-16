#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t; 
    while(t--){
        vector<string> arr(10);
        for (int i = 0; i < 10; i++) {
            cin>>arr[i];
        }
        int ans = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (arr[i][j] == 'X') {
                    int dist = min({i, j, 9 - i, 9 - j});
                    ans += dist + 1;
                }
            }
        }
        cout<<ans<<"\n";
    }
}