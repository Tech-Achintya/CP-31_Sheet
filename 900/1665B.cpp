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
        unordered_map<int,int> mp;
        int maxFreq = 1;
        for(int num : arr){
            mp[num]++;
            maxFreq = max(maxFreq,mp[num]);
        }
        int remainingELe = n - maxFreq;
        int oper = 0;
        int swapPower = 0;
        while(remainingELe > 0){
            oper++;
            swapPower = maxFreq;
            int take = min(remainingELe, swapPower);
            oper += take;
            remainingELe -= take;
            maxFreq += take;
        }
        cout<<oper<<"\n";
    }
}