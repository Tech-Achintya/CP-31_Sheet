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
        int n,r,b;
        cin>>n>>r>>b;
        int partition = b + 1;
        string s;

        while (partition) {
            int reds = (r + partition - 1) / partition;

            while (reds--) {
                s.push_back('R');
            }

            r -= (r + partition - 1) / partition;
            partition--;

            if (b) {
                s.push_back('B');
                b--;
            }
        }

        cout << s << "\n";
    }
}
