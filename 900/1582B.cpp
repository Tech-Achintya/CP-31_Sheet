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
        int cntOne = 0;
        int cntZero = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            if (x == 1) {
                cntOne++;
            } 
            else if(x == 0) {
                cntZero++;
            }
        }

        ll ans = cntOne * pow(2, cntZero);
        
        cout<< ans << "\n";
    }
}