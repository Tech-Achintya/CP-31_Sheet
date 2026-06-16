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
        long long x,n;
        cin >> x >> n;
        int y = n%4;
        if(y==1){
            if(x%2==0){
                cout<<x-n;
            }else{
                cout<<x+n; //177+13-1
            }
        }else if(y==2){
            if(x%2==0){
                cout<<x+1;
            }else{
                cout<<x-1;
            }
        }else if(y==3){
            if(x%2==0){
                cout<<x+n+1;
            }else{
                cout<<x-n-1;
            }
        }else{
            cout<<x;
        }
        cout<<"\n";
    }
}