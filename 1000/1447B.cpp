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
        int n,m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        int cntNeg = 0;
        int sum = 0;
        int mini = 1e9;
        for (int i = 0; i < n; i++) {
            for(int j = 0; j< m; j++){
                cin>>grid[i][j];
                if(grid[i][j]<0){
                    cntNeg++;
                }
                int val = abs(grid[i][j]);
                sum += val;
                mini = min(val,mini);
            }
        }
        if(cntNeg%2==0){
            cout<<sum<<"\n";
        }else{
            cout<<sum-2*mini<<"\n";
        }

        
    }
}