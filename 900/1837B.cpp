#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string arr;
        cin >> arr;
        
        int longest = 1, cur = 1;
        for(int i = 1; i < n; i++){
            if(arr[i] == arr[i-1]){
                cur++;
            } else {
                cur = 1;
            }
            longest = max(longest, cur);
        }
        cout << longest + 1 << "\n";
    }
}
