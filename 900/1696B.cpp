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
        int segments = 0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                while(i<n && arr[i]!=0){
                    i++;
                }
                segments++;
            }
            if(segments==2){
                break;
            }
        }
        cout<<segments<<endl;
    }
}
