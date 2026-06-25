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
        map<int,vector<int>> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x].push_back(i);
            arr[i] = x;
        }
        bool flag = true;
        for(auto& it : mp){
            if(it.second.size()==1){
                flag = false;
            }else{
                rotate(it.second.begin(), it.second.end() - 1, it.second.end());
            }
        }
        if(!flag){
            cout<<-1<<"\n";
            continue;
        }
        vector<int> ans(n);
        unordered_map<int,int> pointerMap;
        for(int i=0;i<n;i++){
            int curr = arr[i]; 
            if(pointerMap.find(curr)==pointerMap.end()){
                ans[i] = mp[curr][0];
                pointerMap[curr] = 1;
            }else{
                int idx = pointerMap[curr];
                ans[i] = mp[curr][idx];
                pointerMap[curr]++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]+1<<" ";
        }
        cout<<"\n";
    
    }
}