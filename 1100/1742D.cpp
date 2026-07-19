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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<pair<int,int>> allEle(1001,{1e9,-1e9});
        for(int i=0;i<n;i++){
            allEle[arr[i]].first = min(allEle[arr[i]].first,i+1);
            allEle[arr[i]].second = max(allEle[arr[i]].second,i+1);
        }
        int ans = 0;
        for(int i=1;i<=1000;i++){
            if(allEle[i].first==1e9 || allEle[i].second == -1e9){
                continue;
            }
            
            for(int j=1;j<=1000;j++){
                if(allEle[j].first==1e9 || allEle[j].second == -1e9){
                    continue;
                }
                if(__gcd(i,j)==1){
                    ans = max(ans,
                            allEle[i].second + allEle[j].second);
                }
            }
        }
        if(ans==0){
            cout<<-1<<"\n";
            continue;
        }
        cout<<ans<<"\n";
    }
}