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
        int minOp = 0;
        bool flag = false;
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=arr[i+1]){
                int temp = arr[i];
                while(temp>=arr[i+1] && temp>0){
                    temp/=2;
                    minOp++;
                }
                arr[i] = temp;
            }
            if(arr[i] >= arr[i+1]){   
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<-1;
        }else{
            cout<<minOp;
        }
        cout<<endl; 
    }
}