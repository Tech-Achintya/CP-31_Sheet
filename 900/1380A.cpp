#include <bits/stdc++.h>
using namespace std;

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
 
        vector<int> left(n, -1), right(n, -1);
 
        int mn = 0;
        for (int i = 1; i < n; i++) {
            if (arr[mn] < arr[i])
                left[i] = mn;
 
            if (arr[i] < arr[mn])
                mn = i;
        }
 
        mn = n - 1;
        for (int i = n - 2; i >= 0; i--) {
            if (arr[mn] < arr[i])
                right[i] = mn;
 
            if (arr[i] < arr[mn])
                mn = i;
        }
 
        bool found = false;
 
        for (int j = 0; j < n; j++) {
            if (left[j] != -1 && right[j] != -1) {
                cout << "YES\n";
                cout << left[j] + 1 << " "
                     << j + 1 << " "
                     << right[j] + 1 << "\n";
                found = true;
                break;
            }
        }
 
        if (!found) {
            cout << "NO\n";
        }
    }
    return 0;
}