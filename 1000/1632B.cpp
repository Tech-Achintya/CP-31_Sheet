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
 
        int k = 1;
        while ((k << 1) < n)
            k <<= 1;
 
        for (int i = k - 1; i >= 0; i--)
            cout << i << " ";
 
        for (int i = k; i < n; i++)
            cout << i << " ";
 
        cout << '\n';
    }
 
}