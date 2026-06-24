// 5 3
// 3 8 5 6 7
// 3->[0,6]
// 8->[5,11]  5,6
// 5->[2,8]   5,6
// 6->[3,9]   5,6
// 7->[4,10]  5,6

// 5 3
// 3 10 9 8 7
// 3->[0,6]
// 10->[7,13]  (v change) [7,13]
// 9->[6,12]  [7,12]
// 8->[8,11]  [8,11]
// 7->[4,10]  [8,10]

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
        int n,x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int leftRange = arr[0]-x;
        int rightRange=  arr[0]+x;
        int change = 0;
        for(int i=1;i<n;i++){
            int currLeftRange = arr[i] - x;
            int currRightRange = arr[i] + x;
            if(max(leftRange,currLeftRange) <= min(rightRange,currRightRange)){
                leftRange = max(leftRange,currLeftRange);
                rightRange = min(rightRange,currRightRange);
            }else{
                rightRange = currRightRange;
                leftRange = currLeftRange;
                change++;
            }
        }
        cout<<change<<"\n";
        
    }
}