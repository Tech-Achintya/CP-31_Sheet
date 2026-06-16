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
            if(arr[i]==1){
                arr[i]++;
            }
        }
        for(int i=1;i<n;i++){
            if(arr[i]%arr[i-1]==0){
                arr[i]++;
            }
        }
        print(arr);
        
    }
}
