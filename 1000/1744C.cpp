// rrrggygyy  r  r  g  y  y 
// 123456789 10 11 12 13 14

// g->4,5,7,12,18,19,21,26
// y->6,8,9,13,14 
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
        char c;
        cin >> n>>c;
        string s;
        cin>>s;
        if(c=='g'){
            cout<<0<<"\n";
            continue;
        }

        vector<int> gIndexes;
        vector<int> cIndexes;
        for(int i=0;i<n;i++){
            if(s[i]=='g'){
                gIndexes.push_back(i+1);
            }else if(s[i]==c){
                cIndexes.push_back(i+1);
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='g'){
                gIndexes.push_back(i+1+n);
            }
        }
        int ans = 0;
        for(int i=0;i<cIndexes.size();i++){
            int currPos = cIndexes[i];
            int idx = upper_bound(gIndexes.begin(),gIndexes.end(),currPos)-gIndexes.begin();
            ans = max(ans, gIndexes[idx] - currPos);
        }
        cout<<ans<<"\n";
    }
}