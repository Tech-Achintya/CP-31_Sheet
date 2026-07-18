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
        ll n,k;
        cin>>n>>k;
        vector<vector<int>> grid(n,vector<int> (n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>grid[i][j];
            }
        }

        vector<vector<int>> rotatedGrid(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                rotatedGrid[n-1-i][n-1-j] = grid[i][j];
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<rotatedGrid[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        ll cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=rotatedGrid[i][j]){
                    cnt++;
                }
            }
        }
        cnt/=2;
        if(cnt > k){
            cout << "No";
        }
        else{
            ll rem = k - cnt;
            if(n % 2 == 1 || rem % 2 == 0)
                cout<<"Yes";
            else
                cout<<"No";
        }
        grid.clear();
        rotatedGrid.clear();
        cout<<"\n";
    }
}