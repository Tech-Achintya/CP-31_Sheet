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
        string s;
        cin>>s;
        ll n = s.size();
        ll cnt = 0;
        int i=0;
        string temp = s + s;
        bool allOne = true;
        for (char ch : s) {
            if (ch == '0') {
                allOne = false;
                break;
            }
        }

        if (allOne) {
            cout << n * n << '\n';
            continue;
        }
        while (i < 2 * n) {
            if (temp[i] == '0') {
                i++;
                continue;
            }
            ll curr = 0;
            while (i < 2 * n && temp[i] == '1') {
                curr++;
                i++;
            }   
            cnt = max(cnt, curr);
        }

        cnt = min(n,cnt);
        cout << ((cnt + 1) / 2) * ((cnt + 2) / 2) << '\n';
        
    }
}